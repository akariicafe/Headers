@class AVTimer;
@protocol AVTimeControlling;

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {
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
@property (readonly, getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
@property (readonly, getter=isCurrentTimeAtEndOfSeekableTimeRanges) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property double minTime;
@property double maxTime;
@property (retain) id<AVTimeControlling> playerController;
@property double interval;
@property double resolution;
@property double currentTime;

+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingTargetTime;
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingSeekableTimeRangeDuration;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)encodeWithCoder:(id)a0;

@end
