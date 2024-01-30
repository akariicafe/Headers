@class MLModel, NSString;

@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging>

@property (readonly) MLModel *mlModel;
@property (readonly) MLModel *scalerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)defaultRecognizabilityModelPath;
+ (id)dataScalerInputName;
+ (id)dataScalerOutputName;
+ (id)defaultAestheticQualityDataScalerPath;
+ (id)defaultAestheticQualityModelPath;
+ (id)defaultRecognizabilityDataScalerPath;
+ (id)modelPathForResource:(id)a0;
+ (id)svmInputName;
+ (id)svmOutputName;

- (void).cxx_destruct;
- (id)initWithModelPath:(id)a0 dataScalerPath:(id)a1 error:(id *)a2;
- (BOOL)predict:(id)a0 output:(double *)a1 error:(id *)a2;

@end
