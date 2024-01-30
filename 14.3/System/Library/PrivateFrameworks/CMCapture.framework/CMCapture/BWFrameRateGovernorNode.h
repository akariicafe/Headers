@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {
    BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
    BOOL _dropsStartupFramesWithUnstableAE;
    BOOL _preservesMotionDataFromDroppedFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    long long _frameCount;
    BOOL _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (id)init;
- (id)nodeSubType;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (void)dealloc;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;

@end
