@class NSSet, NSString;

@interface VCPMAMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSString *_featureName;
    struct __CVBuffer { } *_buffer;
}

@property (readonly, nonatomic) NSSet *featureNames;

+ (id)featureProviderWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { } *)a0 andFeatureName:(id)a1;

@end
