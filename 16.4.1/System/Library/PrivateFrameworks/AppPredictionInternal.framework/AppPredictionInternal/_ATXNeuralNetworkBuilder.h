@class NSMutableData, NSMutableArray;

@interface _ATXNeuralNetworkBuilder : NSObject {
    unsigned long long _prevSize;
    unsigned long long _nlayers;
    NSMutableData *_descriptors;
    NSMutableArray *_weightsAndBiases;
    BOOL _haveOutputLayer;
    BOOL _done;
}

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (void)addHiddenLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 skip:(BOOL)a4;
- (void)addOutputLayer:(unsigned long long)a0 weights:(const float *)a1 bias:(const float *)a2 activation:(unsigned char)a3 softmax:(BOOL)a4;
- (id)initWithInputSize:(unsigned long long)a0;

@end
