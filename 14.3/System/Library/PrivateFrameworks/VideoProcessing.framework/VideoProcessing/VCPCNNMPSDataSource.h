@class NSString, MPSCNNConvolutionDescriptor;

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {
    unsigned int _dataType;
    MPSCNNConvolutionDescriptor *_descriptor;
    void *_kernelWeights;
    float *_biasTerms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (BOOL)load;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptor;
- (unsigned int)dataType;
- (id)initWith:(unsigned int)a0 convolutionDescriptor:(id)a1 kernelWeights:(void *)a2 biasTerm:(float *)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)label;
- (void *)weights;
- (float *)biasTerms;

@end
