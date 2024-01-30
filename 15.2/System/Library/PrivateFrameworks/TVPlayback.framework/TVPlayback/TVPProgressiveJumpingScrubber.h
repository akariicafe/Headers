@class NSTimer, TVPPlayer;

@interface TVPProgressiveJumpingScrubber : NSObject

@property (nonatomic) unsigned long long skipCount;
@property (nonatomic) double skipAdjustTime;
@property (nonatomic) double nextSkipAdjustTime;
@property (nonatomic) double skipAdjustPeriod;
@property (retain, nonatomic) NSTimer *skipTimer;
@property (weak, nonatomic) TVPPlayer *player;
@property (nonatomic) double rate;

- (void).cxx_destruct;
- (void)_skipTimerFired:(id)a0;
- (void)cancelScrub;
- (double)_nextTimeToAdvanceFromTime:(double)a0;
- (void)startScrubWithRate:(double)a0;

@end
