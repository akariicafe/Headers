@class NSArray, NSString;

@interface CAGradientLayer : CALayer

@property (retain) id colorMap;
@property (copy) NSArray *interpolations;
@property (copy) NSArray *colors;
@property (copy) NSArray *locations;
@property struct CGPoint { double x0; double x1; } startPoint;
@property struct CGPoint { double x0; double x1; } endPoint;
@property (copy) NSString *type;

+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)_colorSpaceDidChange;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (id)implicitAnimationForKeyPath:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)_renderBackgroundInContext:(struct CGContext { } *)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;

@end
