@interface MPSNNPadNode : MPSNNFilterNode {
    struct MPSImageCoordinate { unsigned long long x; unsigned long long y; unsigned long long channel; } _paddingSizeBefore;
    struct MPSImageCoordinate { unsigned long long x; unsigned long long y; unsigned long long channel; } _paddingSizeAfter;
    unsigned long long _edgeMode;
}

@property (nonatomic) float fillValue;

+ (id)nodeWithSource:(id)a0 paddingSizeBefore:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 paddingSizeAfter:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 edgeMode:(unsigned long long)a3;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 paddingSizeBefore:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 paddingSizeAfter:(struct MPSImageCoordinate { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 edgeMode:(unsigned long long)a3;
- (void *)newFilterNode;

@end
