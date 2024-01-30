@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property const struct CGPath { } *path;
@property struct CGColor { } *fillColor;
@property (copy) NSString *fillRule;
@property struct CGColor { } *strokeColor;
@property double strokeStart;
@property double strokeEnd;
@property double lineWidth;
@property double miterLimit;
@property (copy) NSString *lineCap;
@property (copy) NSString *lineJoin;
@property double lineDashPhase;
@property (copy) NSArray *lineDashPattern;

+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)_colorSpaceDidChange;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)_renderForegroundInContext:(struct CGContext { } *)a0;
- (id)implicitAnimationForKeyPath:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;

@end
