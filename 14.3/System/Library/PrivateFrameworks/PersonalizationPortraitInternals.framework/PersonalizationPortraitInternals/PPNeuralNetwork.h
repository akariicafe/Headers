@class NSData;

@interface PPNeuralNetwork : NSObject {
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *_layers;
}

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long outputSize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)forInputs:(const float *)a0 computeOutputLayer:(float *)a1;
- (double)_predict:(float *)a0 freeInputsAfterUse:(BOOL)a1;
- (float *)_runOnInputs:(float *)a0 freeInputsAfterUse:(BOOL)a1;
- (double)predictWithDoubles:(const double *)a0;
- (double)predictWithFloats:(const float *)a0;

@end
