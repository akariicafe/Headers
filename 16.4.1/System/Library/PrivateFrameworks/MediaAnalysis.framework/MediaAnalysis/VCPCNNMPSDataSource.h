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
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)descriptor;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)dataType;
- (float *)biasTerms;
- (void *)weights;
- (id)label;
- (void).cxx_destruct;
- (id)initWith:(unsigned int)a0 convolutionDescriptor:(id)a1 kernelWeights:(void *)a2 biasTerm:(float *)a3;

@end
