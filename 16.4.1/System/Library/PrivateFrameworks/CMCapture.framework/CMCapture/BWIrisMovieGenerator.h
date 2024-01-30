@class BWVideoOrientationTimeMachine, BWLimitedGMErrorLogger, BWIrisStillImageMovieMetadataCache, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BWIrisMovieGenerator : NSObject {
    BOOL _sourceIsFrontFacingCamera;
    BOOL _sampleReferenceMoviesEnabled;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _masterMovieDuration;
    struct OpaqueCMByteStream { } *_byteStream;
    struct OpaqueFigFormatReader { } *_masterMovieReader;
    BOOL _masterMovieParsingComplete;
    long long _masterMovieAudioExtractionID;
    struct OpaqueFigSimpleMutex { } *_movieInfoAndCallbacksMutex;
    NSMutableArray *_movieInfoAndCallbacks;
    int _numberOfPendingReferenceMovies;
    NSObject<OS_dispatch_queue> *_movieGenerationQueue;
    BOOL _suspended;
    BWIrisStillImageMovieMetadataCache *_irisStillImageMovieMetadataCache;
    BWVideoOrientationTimeMachine *_videoOrientationTimeMachine;
    BWLimitedGMErrorLogger *_limitedGMErrorLogger;
}

@property BOOL suspended;
@property (readonly) int numberOfPendingReferenceMovies;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } actualMovieStartTime;
@property BOOL vitalInputStreamHasBeenForcedOff;
@property int streamForcedOffErrorCode;

+ (void)initialize;

- (BOOL)flush;
- (void)dealloc;
- (BOOL)flushAsync;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { } *)a0 forFrontFacingCamera:(BOOL)a1 sampleReferenceMoviesEnabled:(BOOL)a2 movieGenerationQueue:(id)a3 irisStillImageMovieMetadataCache:(id)a4 videoOrientationTimeMachine:(id)a5;
- (void)parseAdditionalFragments;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromMetadataRingBuffer:(id)a1;
- (void)writeMovieWithInfo:(id)a0 completionHandler:(id /* block */)a1;

@end
