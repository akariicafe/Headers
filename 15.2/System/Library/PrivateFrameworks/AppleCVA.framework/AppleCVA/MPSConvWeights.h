@class NSString, MPSCNNConvolutionDescriptor;

@interface MPSConvWeights : NSObject <MPSCNNConvolutionDataSource>

@property unsigned int dataType;
@property (retain, nonatomic) MPSCNNConvolutionDescriptor *descriptor;
@property (nonatomic) void *weights;
@property (nonatomic) float *biasTerms;
@property (retain, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)purge;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)load;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;

@end
