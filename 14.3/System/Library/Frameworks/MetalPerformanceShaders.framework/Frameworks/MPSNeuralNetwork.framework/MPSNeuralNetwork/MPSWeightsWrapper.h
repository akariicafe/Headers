@class NSString, NSData, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource, MPSCNNBatchNormalizationDataSource;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNBatchNormalizationDataSource> _dataSource;
    id<MPSCNNConvolutionDataSource> _source;
    struct NeuronInfo { int type; float a; float b; float c; NSData *aData; } _info;
    MPSCNNConvolutionDescriptor *_descriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (void *)rangesForUInt8Kernel;
- (float *)lookupTableForUInt8Kernel;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)descriptor;
- (unsigned int)dataType;
- (id)label;
- (id)initWithSource:(id)a0 neuronInfo:(struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })a1 batchNorm:(id)a2;
- (void *)weights;
- (float *)biasTerms;

@end
