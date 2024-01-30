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

- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })tileSize;
- (void)_didScroll;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)willMoveToWindow:(id)a0;
- (void)_screenChanged:(id)a0;
- (void)dealloc;
- (void)dumpTiles;
- (BOOL)drawsGrid;
- (id)wakWindow;
- (void)setTileSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateTilingMode;
- (void)setKeepsZoomedOutTiles:(BOOL)a0;
- (BOOL)keepsZoomedOutTiles;
- (void)setWAKWindow:(id)a0;
- (void)layoutTilesNowOnWebThread;
- (void)lockTilingMode;
- (void)drawImageIntoTiles:(struct CGImage { } *)a0;
- (void)unlockTilingMode;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)setDrawsGrid:(BOOL)a0;
- (void)setMaxTileCount:(unsigned int)a0;
- (unsigned int)maxTileCount;
- (unsigned int)adjustedMaxTileCount;
- (void)setLogsTilingChanges:(BOOL)a0;
- (BOOL)logsTilingChanges;
- (void)setTileDrawingEnabled:(BOOL)a0;
- (BOOL)editingTilingModeEnabled;
- (BOOL)tileDrawingEnabled;
- (BOOL)layoutTilesInMainThread;
- (void)setLayoutTilesInMainThread:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (void)setNeedsDisplay;
- (BOOL)isTilingEnabled;
- (void)setTilingEnabled:(BOOL)a0;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)a0;
- (void)_updateForScreen:(id)a0;
- (void)layoutSubviews;
- (void)layoutTilesNow;
- (int)tilingArea;
- (void)removeAllNonVisibleTiles;
- (void)setTilingArea:(int)a0;
- (void)removeAllTiles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTilesOpaque:(BOOL)a0;
- (void)removeForegroundTiles;
- (void)setEditingTilingModeEnabled:(BOOL)a0;
- (void)setInGesture:(int)a0;
- (BOOL)tilesOpaque;

@end
