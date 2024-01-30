@interface BWMatteMediaSuppressionNode : BWNode {
    unsigned int _behavior;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)initWithBehavior:(unsigned int)a0;

@end
