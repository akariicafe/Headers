@class BWFileCoordinatorNode, BWAudioConverterNode, BWAudioFileSinkNode;

@interface FigCaptureAudioFileSinkPipeline : FigCaptureSinkPipeline {
    BWAudioConverterNode *_audioConverterNode;
}

@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode;
@property (readonly, nonatomic) BWAudioFileSinkNode *audioFileSinkNode;

+ (void)initialize;

- (void)dealloc;
- (int)_buildAudioFileSinkPipeline:(id)a0 graph:(id)a1 sourceAudioOutput:(id)a2 recordingStatusDelegate:(id)a3;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 name:(id)a2 sourceAudioOutput:(id)a3 recordingStatusDelegate:(id)a4;

@end
