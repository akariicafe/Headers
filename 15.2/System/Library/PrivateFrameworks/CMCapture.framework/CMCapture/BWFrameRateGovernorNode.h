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

- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (id)nodeSubType;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (void)dealloc;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;
- (BOOL)dropsStartupFramesWithUnstableAE;

@end
