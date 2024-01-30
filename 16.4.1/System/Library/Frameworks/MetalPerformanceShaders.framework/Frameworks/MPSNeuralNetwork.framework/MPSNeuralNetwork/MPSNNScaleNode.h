@protocol MPSImageTransformProvider;

@interface MPSNNScaleNode : MPSNNFilterNode {
    id<MPSImageTransformProvider> _transformProvider;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _size;
}

+ (id)nodeWithSource:(id)a0 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (id)nodeWithSource:(id)a0 transformProvider:(id)a1 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;

- (id)debugDescription;
- (void)dealloc;
- (id)initWithSource:(id)a0 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)initWithSource:(id)a0 transformProvider:(id)a1 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;
- (id)privateInitWithSource:(id)a0 transformProvider:(id)a1 outputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2;

@end
