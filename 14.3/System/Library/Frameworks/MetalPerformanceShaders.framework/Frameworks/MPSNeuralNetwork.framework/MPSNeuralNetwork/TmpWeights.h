@class NSString, MPSCNNConvolutionDescriptor;
@protocol MPSCNNConvolutionDataSource;

@interface TmpWeights : NSObject <MPSCNNConvolutionDataSource> {
    id<MPSCNNConvolutionDataSource> _parentObj;
    MPSCNNConvolutionDescriptor *_convDesc;
    BOOL _hasBias;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)descriptor;
- (id)initWithWeights:(id)a0 useBias:(BOOL)a1 desc:(id)a2;
- (unsigned int)dataType;
- (id)label;
- (void *)weights;
- (float *)biasTerms;

@end
