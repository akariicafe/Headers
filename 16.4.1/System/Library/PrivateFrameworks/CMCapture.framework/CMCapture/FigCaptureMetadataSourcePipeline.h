@class BWSynchronizerNode, BWNode;

@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {
    BWNode *_sourceNode;
    BWSynchronizerNode *_synchronizerNode;
    struct OpaqueCMClock { } *_masterClock;
}

+ (void)initialize;

- (void)dealloc;

@end
