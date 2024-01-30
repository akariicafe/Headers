@class NSData;

@interface _ATXNeuralNetwork : NSObject {
    NSData *_data;
    const char *_dataBytes;
    unsigned long long _nlayers;
    const struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *_layers;
}

@property (readonly, nonatomic) unsigned long long inputSize;
@property (readonly, nonatomic) unsigned long long outputSize;

- (float *)_runOnInputs:(float *)a0 freeInputsAfterUse:(BOOL)a1;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (double)predict:(const double *)a0;
- (id)init;
- (double)predict32:(const float *)a0;
- (void)forInputs:(const float *)a0 computeOutputLayer:(float *)a1;
- (double)_predict:(float *)a0 freeInputsAfterUse:(BOOL)a1;

@end
