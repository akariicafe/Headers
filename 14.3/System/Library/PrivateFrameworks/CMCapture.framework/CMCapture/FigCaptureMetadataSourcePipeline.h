@class BWSynchronizerNode, BWNodeOutput, BWNode;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {
    BWNode *_sourceNode;
    BWSynchronizerNode *_synchronizerNode;
}

@property (nonatomic) struct OpaqueCMClock { } *masterClock;
@property (readonly, nonatomic) struct opaqueCMFormatDescription { } *sourceFormatDescription;
@property (readonly, nonatomic) BWNodeOutput *output;

+ (void)initialize;

- (void)dealloc;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 name:(id)a2 errorOut:(int *)a3;
- (int)_buildMetadataSourcePipeline:(id)a0 graph:(id)a1;

@end
