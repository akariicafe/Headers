@class NSArray, NSString;

@interface CAEmitterLayer : CALayer

@property const struct CGPath { } *emitterPath;
@property (copy) NSArray *emitterRects;
@property float emitterDuration;
@property float spinBias;
@property (copy) NSArray *emitterBehaviors;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cullRect;
@property double cullMinZ;
@property double cullMaxZ;
@property double updateInterval;
@property (copy) NSArray *emitterCells;
@property float birthRate;
@property float lifetime;
@property struct CGPoint { double x0; double x1; } emitterPosition;
@property double emitterZPosition;
@property struct CGSize { double x0; double x1; } emitterSize;
@property double emitterDepth;
@property (copy) NSString *emitterShape;
@property (copy) NSString *emitterMode;
@property (copy) NSString *renderMode;
@property BOOL preservesDepth;
@property float velocity;
@property float scale;
@property float spin;
@property unsigned int seed;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (id)implicitAnimationForKeyPath:(id)a0;
- (void)_colorSpaceDidChange;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)reloadValueForKeyPath:(id)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;

@end
