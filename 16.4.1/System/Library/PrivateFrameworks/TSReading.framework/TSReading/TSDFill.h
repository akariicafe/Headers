@class NSString;

@interface TSDFill : NSObject <TSDPathPainter, TSSThemeAsset> {
    int mInterest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOpaque;
- (id)referenceColor;
- (int)fillType;
- (BOOL)isClear;
- (BOOL)isNearlyWhite;
- (void)paintPath:(struct CGPath { } *)a0 inContext:(struct CGContext { } *)a1;
- (void)paintRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (void)addInterest;
- (void)applyToCALayer:(id)a0 withScale:(double)a1;
- (void)applyToCAShapeLayer:(id)a0 withScale:(double)a1;
- (BOOL)canApplyToCALayer;
- (BOOL)canApplyToCALayerByAddingSublayers;
- (BOOL)canApplyToCAShapeLayer;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (BOOL)drawsInOneStep;
- (void)i_flushCaches;
- (BOOL)isThemeEquivalent:(id)a0;
- (void)paintPath:(struct CGPath { } *)a0 naturalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inContext:(struct CGContext { } *)a2 isPDF:(BOOL)a3;
- (void)removeInterest;
- (BOOL)shouldBeReappliedToCALayer:(id)a0;

@end
