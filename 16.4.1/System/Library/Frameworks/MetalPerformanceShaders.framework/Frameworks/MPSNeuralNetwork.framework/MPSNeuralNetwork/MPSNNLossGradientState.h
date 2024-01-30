@class MPSCNNLossLabels;

@interface MPSNNLossGradientState : MPSNNGradientState {
    float _weight;
    float _labelSmoothing;
    float _epsilon;
    float _delta;
    MPSCNNLossLabels *_lossLabels;
}

+ (id)temporaryStateWithCommandBuffer:(id)a0;

- (id)initWithResource:(id)a0;
- (id)debugDescription;
- (void)dealloc;

@end
