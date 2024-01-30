@interface MPSCNNDilatedPoolingMaxNode : MPSNNFilterNode {
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _strideInPixelsX;
    unsigned long long _strideInPixelsY;
}

@property (readonly, nonatomic) unsigned long long dilationRateX;
@property (readonly, nonatomic) unsigned long long dilationRateY;

+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1;
+ (id)nodeWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2 dilationRate:(unsigned long long)a3;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1;
- (id)initWithSource:(id)a0 filterSize:(unsigned long long)a1 stride:(unsigned long long)a2 dilationRate:(unsigned long long)a3;
- (id)initWithSource:(id)a0 kernelWidth:(unsigned long long)a1 kernelHeight:(unsigned long long)a2 strideInPixelsX:(unsigned long long)a3 strideInPixelsY:(unsigned long long)a4 dilationRateX:(unsigned long long)a5 dilationRateY:(unsigned long long)a6;
- (void *)newFilterNode;

@end
