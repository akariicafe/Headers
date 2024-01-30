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
+ (BOOL)_addNewMetadataTrackToAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 forTrackTimeScale:(int)a1 yieldingTrackID:(int *)a2;

- (BOOL)flush;
- (void)dealloc;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { } *)a0 metadataByteStream:(struct OpaqueCMByteStream { } *)a1 forFrontFacingCamera:(BOOL)a2 sampleReferenceMoviesEnabled:(BOOL)a3 movieGenerationQueue:(id)a4 irisStillImageMovieMetadataCache:(id)a5 videoOrientationTimeMachine:(id)a6;
- (BOOL)_generateIrisMovies:(BOOL)a0;
- (void)_cancelAllPendingIrisMoviesWithError:(int)a0;
- (int)_doIrisMovieParsing:(BOOL)a0;
- (void)_findIrisShortestTrackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0 audioTrackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1 flush:(BOOL)a2;
- (id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 audioTrackDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 flush:(BOOL)a2;
- (BOOL)_generateCompletedIrisMovies:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_determineMasterMovieStartTimeForInfo:(id)a0;
- (int)_generateRefMovieForInfo:(id)a0 movieLevelMetadata:(id)a1 generateMetadataMovie:(BOOL)a2;
- (int)_getAdjustedRefMovieStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 adjustedRefMovieStartTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (int)_getAdjustedRefMovieEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 adjustedRefMovieEndTimeOut:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a1;
- (id)initWithReadableByteStream:(struct OpaqueCMByteStream { } *)a0 forFrontFacingCamera:(BOOL)a1 sampleReferenceMoviesEnabled:(BOOL)a2 movieGenerationQueue:(id)a3 irisStillImageMovieMetadataCache:(id)a4 videoOrientationTimeMachine:(id)a5;
- (void)writeMovieWithInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)parseAdditionalFragments;
- (BOOL)flushAsync;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromMetadataRingBuffer:(id)a1;

@end
