@class NSMutableArray, FigCaptureMovieFileSinkHeadPipeline, BWFigVideoCaptureDevice, FigCaptureMovieFileSinkMiddlePipeline;

@interface FigCaptureMovieFileSinkPipeline : FigCaptureSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureMovieFileSinkHeadPipeline *_headPipeline;
    FigCaptureMovieFileSinkMiddlePipeline *_middlePipeline;
    NSMutableArray *_tailPipelines;
    NSMutableArray *_movieFileSinkNodes;
    NSMutableArray *_videoCompressorNodes;
    NSMutableArray *_sdofCompressorNodes;
    BOOL _momentCaptureMovieRecordingEnabled;
    BOOL _overCaptureTailPipelineRenderingEnabled;
    BOOL _overCaptureEnabled;
}

+ (void)initialize;

- (void)dealloc;
- (id)middlePipeline;

@end
