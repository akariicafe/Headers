@class WAKWindow;

@interface UIWebTiledView : UIView {
    WAKWindow *_wakWindow;
    int _inGestureType;
    int _tilingArea;
    BOOL _didFirstTileLayout;
    BOOL _layoutTilesInMainThread;
    BOOL _tilingModeIsLocked;
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _editingTilingModeEnabled;
}

- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })tileSize;
- (void)_updateForScreen:(id)a0;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)a0;
- (int)tilingArea;
- (void)dumpTiles;
- (BOOL)drawsGrid;
- (id)wakWindow;
- (void)removeAllNonVisibleTiles;
- (void)setTilingArea:(int)a0;
- (void)removeAllTiles;
- (void)setTilesOpaque:(BOOL)a0;
- (void)removeForegroundTiles;
- (void)setNeedsLayout;
- (void)setTileSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isTilingEnabled;
- (void)setTilingEnabled:(BOOL)a0;
- (void)_didScroll;
- (void)willMoveToWindow:(id)a0;
- (void)layoutTilesNow;
- (void)setNeedsDisplay;
- (void)_screenChanged:(id)a0;
- (void)setEditingTilingModeEnabled:(BOOL)a0;
- (BOOL)tilesOpaque;
- (void)dealloc;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setInGesture:(int)a0;
- (unsigned int)maxTileCount;
- (void)updateTilingMode;
- (void)setKeepsZoomedOutTiles:(BOOL)a0;
- (BOOL)keepsZoomedOutTiles;
- (void)setWAKWindow:(id)a0;
- (void)layoutTilesNowOnWebThread;
- (void)drawImageIntoTiles:(struct CGImage { } *)a0;
- (void)lockTilingMode;
- (void)unlockTilingMode;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)setDrawsGrid:(BOOL)a0;
- (void)setMaxTileCount:(unsigned int)a0;
- (unsigned int)adjustedMaxTileCount;
- (void)setLogsTilingChanges:(BOOL)a0;
- (BOOL)logsTilingChanges;
- (BOOL)tileDrawingEnabled;
- (void)setTileDrawingEnabled:(BOOL)a0;
- (BOOL)editingTilingModeEnabled;
- (BOOL)layoutTilesInMainThread;
- (void)setLayoutTilesInMainThread:(BOOL)a0;

@end
