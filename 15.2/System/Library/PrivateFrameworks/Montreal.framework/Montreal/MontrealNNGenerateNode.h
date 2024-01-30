@class MontrealNNModelNode;

@interface MontrealNNGenerateNode : NSObject

@property (readonly) struct { long long nodeType; long long engineType; long long inputDataType; long long outputDataType; long long weightDataType; long long kernelDataType; long long inputEncoding; long long activations[8]; unsigned long long weightAttributes; int inputDimensions[8][4]; int outputDimensions[4][4]; int integers[16]; float floats[16]; void *weights[16]; void *biases[16]; } parameters;
@property (readonly) unsigned long long weightIter;
@property (readonly) MontrealNNModelNode *node;
@property (readonly) unsigned long long weightDataFormat;

- (void)setInputs:(id)a0;
- (void).cxx_destruct;
- (void)setInput:(id)a0 inputIndex:(long long)a1;
- (id)initWithParameters:(struct { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7[8]; unsigned long long x8; int x9[8][4]; int x10[4][4]; int x11[16]; float x12[16]; void *x13[16]; void *x14[16]; } *)a0 weightDataFormat:(unsigned long long)a1;
- (unsigned long long)generateNode:(id)a0 node:(id)a1 weightIter:(unsigned long long)a2 inputs:(id)a3 outputs:(id)a4;
- (id)dataFromWeights:(float *)a0 length:(unsigned long long)a1;

@end
