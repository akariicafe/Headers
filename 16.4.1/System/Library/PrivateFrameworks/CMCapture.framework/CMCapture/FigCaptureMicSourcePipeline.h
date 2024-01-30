@class BWFanOutNode, BWZoomCommandHandler, BWAudioSourceNode;

@interface FigCaptureMicSourcePipeline : FigCaptureSourcePipeline {
    BWAudioSourceNode *_sourceNode;
    BWFanOutNode *_splitterNodesByMicSourcePosition[3];
    unsigned int _nextOutputIndexByMicSourcePosition[3];
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
}

+ (void)initialize;

- (void)dealloc;

@end
