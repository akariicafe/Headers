@class NSString, MLCTensor;

@interface _MLCGPUBatchNormDataSource : NSObject <MPSCNNBatchNormalizationDataSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, weak, nonatomic) MLCTensor *means;
@property (readonly, weak, nonatomic) MLCTensor *variances;
@property (readonly, weak, nonatomic) MLCTensor *betas;
@property (readonly, weak, nonatomic) MLCTensor *gammas;
@property (readonly, nonatomic) float varianceEpsilon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float *)mean;
- (void)purge;
- (float *)beta;
- (BOOL)load;
- (float *)gamma;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)numberOfFeatureChannels;
- (float)epsilon;
- (float *)variance;
- (id)label;
- (id)initWithChannels:(unsigned long long)a0 mean:(id)a1 variance:(id)a2 beta:(id)a3 gamma:(id)a4 epsilon:(float)a5;

@end
