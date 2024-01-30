@protocol NSObject, NSCopying;

@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) unsigned long long imageCropAndScaleOption;
@property (copy, nonatomic) id<NSObject, NSCopying> modelCachingIdentifier;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithPropertiesOfModel:(id)a0;

@end
