@class NSArray;

@interface CALayerHost : CALayer

@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL rendersAsynchronously;
@property BOOL asynchronousOpaque;
@property (copy) NSArray *asynchronousRenderTimes;
@property double asynchronousRenderPeriod;
@property float asynchronousRenderMaxAPL;
@property float asynchronousRenderMaxAPLStrength;
@property BOOL resizesHostedContext;
@property BOOL preservesFlip;
@property BOOL stopsHitTestTransformAccumulation;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)allLayerHosts;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)dealloc;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (id)init;

@end
