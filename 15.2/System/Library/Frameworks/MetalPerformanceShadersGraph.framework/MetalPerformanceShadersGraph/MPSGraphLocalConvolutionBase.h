@class NSArray;

@interface MPSGraphLocalConvolutionBase : MPSGraphOperation {
    unsigned long long _dataLayout;
    NSArray *_kernelShape;
    unsigned long long _dilationRateInX;
    unsigned long long _dilationRateInY;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 inputTensors:(id)a1 controlDependencies:(id)a2 dataLayout:(unsigned long long)a3 kernelShape:(id)a4 dilationRateInX:(unsigned long long)a5 dilationRateInY:(unsigned long long)a6 name:(id)a7;

@end
