@class NSString, MLCTensor;

@interface _MLCGPUInstanceNormDataSource : NSObject <MPSCNNInstanceNormalizationDataSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long channels;
@property (readonly, weak, nonatomic) MLCTensor *betas;
@property (readonly, weak, nonatomic) MLCTensor *gammas;
@property (readonly, nonatomic) float varianceEpsilon;
@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (float *)beta;
- (BOOL)load;
- (float *)gamma;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)epsilon;
- (id)label;
- (id)initWithChannels:(unsigned long long)a0 beta:(id)a1 gamma:(id)a2 epsilon:(float)a3;

@end
