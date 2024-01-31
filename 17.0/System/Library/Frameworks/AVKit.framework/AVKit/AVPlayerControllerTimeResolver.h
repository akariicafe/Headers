@class AVTimer;
@protocol AVTimeControlling;

@interface AVPlayerControllerTimeResolver : NSObject {
    id<AVTimeControlling> _playerController;
    double _interval;
    double _resolution;
    double _currentTime;
    AVTimer *_timer;
}

@property double targetTime;
@property double targetTimeWithinEndTimes;
@property (readonly) double remainingTargetTimeWithinEndTimes;
@property double currentTimeWithinEndTimes;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property (readonly) double seekableTimeRangeDuration;
@property (readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property double minTime;
@property double maxTime;
@property (retain) id<AVTimeControlling> playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (id)keyPathsForValuesAffectingTargetTime;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
