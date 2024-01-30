@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {
    BOOL _recording;
}

@property (nonatomic) BOOL momentCaptureMovieRecordingEnabled;
@property (nonatomic) BOOL recording;
@property (retain, nonatomic) NSMutableArray *pendingIrisRecordings;

- (void)dealloc;

@end
