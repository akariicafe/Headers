@class AVAssetTrack, NSMutableArray;

@interface AVTimecodeController : NSObject {
    long long _frameCount;
    AVAssetTrack *_videoTrack;
    NSMutableArray *_timecodes;
    struct CVSMPTETime { short subframes; short subframeDivisor; unsigned int counter; unsigned int type; unsigned int flags; short hours; short minutes; short seconds; short frames; } _maxTimecode;
    long long _maxFrameNumber;
    id _timeObserver;
}

@property (retain, nonatomic) AVAssetTrack *timecodeTrack;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } observationInterval;

- (id)maxFrameCountString;
- (void).cxx_destruct;
- (long long)calculateFrameNumberAtTimecode:(id)a0;
- (BOOL)validateCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)cacheTimecodeDescriptionForSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (long long)calculateFrameNumberAtCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)calculateFrameNumberAtTimeInterval:(double)a0;
- (void)calculateMaxFrameAndTimecode;
- (id)calculateTimecodeAtFrame:(long long)a0;
- (id)initWithTimecodeTrack:(id)a0 videoTrack:(id)a1;
- (id)maxTimecodeString;
- (long long)offsetFor:(id)a0 fromTimecode:(id)a1;
- (BOOL)readTimecodes;
- (double)timeIntervalForFrameNumber:(long long)a0;
- (BOOL)timecodeAvailable;
- (id)timecodeForFrameNumber32UsingFormatDescription:(struct opaqueCMFormatDescription { } *)a0 timecodeStartFrame:(long long)a1;
- (struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; })timecodeForFrameNumber64UsingCachedDescription:(long long)a0;
- (struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; })timecodeForOffset:(long long)a0 from:(long long)a1 timecode:(id)a2;

@end
