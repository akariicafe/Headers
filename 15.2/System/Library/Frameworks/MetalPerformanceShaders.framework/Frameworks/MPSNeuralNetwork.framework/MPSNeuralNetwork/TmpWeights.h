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

- (void *)weights;
- (void)purge;
- (unsigned int)dataType;
- (float *)biasTerms;
- (id)label;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptor;
- (BOOL)load;
- (void)dealloc;
- (id)initWithWeights:(id)a0 useBias:(BOOL)a1 desc:(id)a2;

@end
