@interface BWPreviewHistogramNode : BWNode

+ (void)initialize;

- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)init;

@end
