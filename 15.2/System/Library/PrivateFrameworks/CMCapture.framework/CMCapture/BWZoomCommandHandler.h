@class BWZoomDelayBuffer, NSArray;
@protocol BWZoomCompletionDelegate;

@interface BWZoomCommandHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    BOOL _zoomFactorServiced;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    BOOL _clientCanCompensateForDelay;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastFramePTSes[2];
    long long _timeForLastRequestedZoomFactor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _rampStartTime;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    BOOL _rampActive;
    int _rampType;
    double _rampDuration;
    float _rampSnapFraction;
    float _rampCurrentVelocity;
    float _rampZoomFactorOfInterest;
    NSArray *_fudgedZoomRanges;
    float _maxZoomFactorToApplyFudge;
    float _minZoomFactorToApplyFudge;
    float _maxFudgedZoomFactor;
    float _minFudgedZoomFactor;
}

@property float requestedZoomFactor;
@property (readonly) float requestedZoomFactorWithoutFudge;
@property (readonly) float appliedZoomFactor;
@property (readonly) float appliedZoomFactorWithoutFudge;
@property (readonly) float rampTargetZoomFactor;
@property (readonly) float rampZoomFactorOfInterest;
@property (nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;
@property (nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegateForStereoAudio;

+ (void)initialize;

- (float)updateZoomModelForNextFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)rampToVideoZoomFactor:(float)a0 withRampType:(int)a1 rate:(float)a2 duration:(double)a3 snapToTargetZoomFactorWithinRampFraction:(float)a4 commandID:(int)a5;
- (void)resetZoomDelayBuffer;
- (float)predictRampZoomFactorAfterNumberOfFrames:(int)a0 settingZoomFactorOfInterest:(float)a1;
- (void)setTypicalISPZoomDelay:(unsigned int)a0 clientCanCompensateForDelay:(BOOL)a1;
- (void)setFudgedZoomRanges:(id)a0;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)a0;
- (float)applyFudgeToZoomFactor:(float)a0;
- (id)init;
- (void)resetZoomFactorOfInterest;
- (float)updateZoomModelAndAppliedZoomFactorForNextFrameWithPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 ptsTolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 delayedISPAppliedZoomFactor:(float)a2 zoomFactorChangedOut:(BOOL *)a3;
- (void)dealloc;
- (long long)timeForLastRequestedZoomFactor;
- (BOOL)haveUpdatedZoomModelForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
