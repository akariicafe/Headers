@interface MPSNNReshapeNode : MPSNNFilterNode {
    unsigned long long _resultWidth;
    unsigned long long _resultHeight;
    unsigned long long _resultFeatureChannels;
}

+ (id)nodeWithSource:(id)a0 resultWidth:(unsigned long long)a1 resultHeight:(unsigned long long)a2 resultFeatureChannels:(unsigned long long)a3;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 resultWidth:(unsigned long long)a1 resultHeight:(unsigned long long)a2 resultFeatureChannels:(unsigned long long)a3;
- (void *)newFilterNode;

@end
