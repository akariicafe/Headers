@class NSString;

@interface _UIOMutableActionOriginContext : _UIOActionOriginContext

@property (copy, nonatomic) NSString *sceneIdentity;
@property (copy, nonatomic) NSString *displayIdentifier;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) unsigned long long layerId;
@property (nonatomic) struct CGPoint { double x0; double x1; } layerReferencePoint;

- (void)setContextId:(unsigned int)a0;
- (void)setSceneIdentity:(id)a0;
- (void)setDisplayIdentifier:(id)a0;
- (void)setLayerId:(unsigned long long)a0;
- (void)setLayerReferencePoint:(struct CGPoint { double x0; double x1; })a0;

@end
