@class MLModel, NSString;

@interface VCPMAMLModel : NSObject

@property (readonly, nonatomic) MLModel *model;
@property (readonly, nonatomic) long long inputSize;
@property (readonly, nonatomic) unsigned int inputPixelFormat;
@property (readonly, nonatomic) NSString *inputFeatureName;
@property (readonly, nonatomic) NSString *outputFeatureName;

+ (id)vcp_sharedModelWithModelName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModelName:(id)a0;

@end
