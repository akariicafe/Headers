@interface BWVideoDepthNode : BWNode

+ (void)initialize;

- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
