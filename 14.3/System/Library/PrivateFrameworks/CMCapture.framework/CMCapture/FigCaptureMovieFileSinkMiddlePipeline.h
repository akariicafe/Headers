@class BWFanOutNode, FigCaptureMovieFileSinkHeadPipeline, FigCaptureVISPipeline, BWOverCaptureFanOutNode, NSMutableArray;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {
    BWFanOutNode *_videoFanOut;
    BWOverCaptureFanOutNode *_audioFanOut;
    NSMutableArray *_metadataFanOuts;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    unsigned long long _numberOfTailsToSupport;
}

@property (readonly, nonatomic) FigCaptureVISPipeline *visPipeline;
@property (readonly, nonatomic) FigCaptureVISPipeline *overCaptureVISPipeline;

- (id)metadataOutputsForTailIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)videoOutputForTailIndex:(unsigned long long)a0;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 parentPipeline:(id)a2 headPipeline:(id)a3 captureDevice:(id)a4;
- (id)audioOutputForTailIndex:(unsigned long long)a0;
- (int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)a0 graph:(id)a1 parentPipeline:(id)a2 headPipeline:(id)a3 captureDevice:(id)a4;

@end
