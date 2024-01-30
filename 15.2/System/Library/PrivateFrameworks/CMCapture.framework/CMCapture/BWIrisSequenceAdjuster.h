@class NSMutableArray, BWMotionDataPreserver;

@interface BWIrisSequenceAdjuster : NSObject {
    NSMutableArray *_discontinuities;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _firstIrisAudioOffset;
    NSMutableArray *_interleavingQueues;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextAdjustedVideoTime;
    unsigned int *_mediaTypes;
    NSMutableArray *_timeSkews;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _masterMovieOriginalStartTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _previewFrameDuration;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastVideoAdjustedTime;
    BWMotionDataPreserver *_motionDataPreserver;
    BOOL _generateIFrames;
}

@property (nonatomic) int audioOffsetForOriginalStillImageTimeMaximumFrameLatency;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } masterMovieOriginalStartTime;
@property (readonly) BOOL readyToReleaseAudio;
@property (readonly) unsigned long long maximumNumberOfPreDiscontinuityFramesNeededToSatisfyAllDropFrameRecipes;

+ (void)initialize;

- (id)_timeSkewsDescription;
- (void)enqueueVideoBufferTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 nativeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isBracketFrame:(BOOL)a2 isSISFrame:(BOOL)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_audioOffsetForOriginalStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 adjustedStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_adjustedTimeForMetadataBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct opaqueCMSampleBuffer { } *)dequeueAndRetainAdjustedSampleBufferForMediaTypeWithIndex:(long long)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })audioOffsetForOriginalStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)discontinuityExistsBetweenCurrentPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 previousPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })adjustedTimeForStillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithMediaTypes:(id)a0 visMotionMetadataPreloadingEnabled:(BOOL)a1 generateIFrames:(BOOL)a2;
- (BOOL)_getPreviousTimeSkewOut:(id *)a0 andNextTimeSkewOut:(id *)a1 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (long long)_indexOfTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forMediaTypeWithIndex:(long long)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_adjustedTimeForVideoBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forceKeepingBuffer:(BOOL)a1 discontinuityFrameAttributesOut:(struct { BOOL x0; BOOL x1; long long x2; int x3; } *)a2;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_originalDurationForVideoBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_adjustedTimeForAudioBufferWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_adjustTimesInAudioInterleavingQueues;
- (void)reset;
- (void)adjustMovieInfoTimes:(id)a0;

@end
