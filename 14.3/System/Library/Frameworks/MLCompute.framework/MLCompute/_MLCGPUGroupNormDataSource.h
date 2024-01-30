@class NSString, MLCTensor;

@interface _MLCGPUGroupNormDataSource : NSObject <MPSCNNGroupNormalizationDataSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) MLCTensor *betas;
@property (readonly, weak, nonatomic) MLCTensor *gammas;
@property (readonly, nonatomic) float varianceEpsilon;
@property (readonly, nonatomic) unsigned long long numberOfFeatureChannels;
@property (nonatomic) unsigned long long numberOfGroups;
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
- (id)initWithChannels:(unsigned long long)a0 groupCount:(unsigned long long)a1 beta:(id)a2 gamma:(id)a3 epsilon:(float)a4;

@end
