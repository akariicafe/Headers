@interface VNRemoveBackgroundRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropResult;
@property (nonatomic) BOOL returnMask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
