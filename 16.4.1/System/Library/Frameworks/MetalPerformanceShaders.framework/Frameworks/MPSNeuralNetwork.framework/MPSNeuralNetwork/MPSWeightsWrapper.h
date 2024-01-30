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
- (id)descriptor;
- (BOOL)load;
- (void *)rangesForUInt8Kernel;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)dataType;
- (void)dealloc;
- (float *)biasTerms;
- (void *)weights;
- (float *)lookupTableForUInt8Kernel;
- (id)label;
- (id)initWithSource:(id)a0 neuronInfo:(struct NeuronInfo { int x0; float x1; float x2; float x3; id x4; })a1 batchNorm:(id)a2;

@end
