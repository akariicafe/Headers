@class MPSNNMultiplicationNode, MPSNNImageNode, MPSNNSubtractionNode;

@interface TCMPSStyleTransferPreProcessing : NSObject

@property (retain, nonatomic) MPSNNMultiplicationNode *multiplicationNode;
@property (retain, nonatomic) MPSNNSubtractionNode *subtractionNode;
@property (retain, nonatomic) MPSNNImageNode *output;

- (void).cxx_destruct;
- (id)backwardPass:(id)a0;
- (id)initWithParameters:(id)a0 inputNode:(id)a1 scaleNode:(id)a2 meanNode:(id)a3;

@end
