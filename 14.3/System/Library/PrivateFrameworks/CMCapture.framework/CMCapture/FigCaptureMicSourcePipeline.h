@class BWFanOutNode, BWZoomCommandHandler, BWAudioSourceNode;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWFanOutNode *_splitterNodesByMicSourcePosition[3];
    unsigned int _nextOutputIndexByMicSourcePosition[3];
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}

@property (readonly, nonatomic) struct OpaqueCMClock { } *clock;
@property (readonly, nonatomic) BWAudioSourceNode *sourceNode;

+ (void)initialize;

- (void)dealloc;
- (id)nextOutputForMicSourcePosition:(int)a0;
- (int)_buildMicSourcePipelineWithConfiguration:(id)a0 graph:(id)a1 cmSession:(struct opaqueCMSession { } *)a2 renderDelegate:(id)a3 isMultiCamSession:(BOOL)a4;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 name:(id)a2 cmSession:(struct opaqueCMSession { } *)a3 renderDelegate:(id)a4 isMultiCamSession:(BOOL)a5;

@end
