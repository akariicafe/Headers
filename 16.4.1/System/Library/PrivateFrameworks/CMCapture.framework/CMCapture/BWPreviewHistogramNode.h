@interface BWPreviewHistogramNode : BWNode {
    BOOL _ispHistogramDownsamplingEnabled;
}

@property (nonatomic) BOOL msrHistogramsEnabled;
@property (nonatomic) BOOL ispHistogramsEnabled;

+ (void)initialize;

- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)init;

@end
