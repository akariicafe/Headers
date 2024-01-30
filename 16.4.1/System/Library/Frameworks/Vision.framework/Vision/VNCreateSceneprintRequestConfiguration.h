@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
