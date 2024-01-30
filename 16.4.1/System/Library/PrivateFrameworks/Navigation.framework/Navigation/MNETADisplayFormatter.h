@class NSTimeZone, MNWeakTimer, NSDate;
@protocol MNETADisplayFormatterDelegate;

@interface MNETADisplayFormatter : NSObject {
    NSTimeZone *_timeZone;
    MNWeakTimer *_updateTimer;
}

@property (weak, nonatomic) id<MNETADisplayFormatterDelegate> delegate;
@property (nonatomic) double remainingTimeToEndOfRoute;
@property (nonatomic) double remainingTimeToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfLeg;
@property (readonly, nonatomic) NSDate *displayETAToEndOfLeg;
@property (readonly, nonatomic) double displayRemainingTimeToEndOfRoute;
@property (readonly, nonatomic) NSDate *displayETAToEndOfRoute;

- (void)_updateTimerFired;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithTimeZone:(id)a0;
- (id)_displayDateWithRemainingTime:(double)a0;
- (double)_displayTimeIntervalForTimeInterval:(double)a0;
- (void)_scheduleUpdateTimer;
- (void)_updateDisplayETA;

@end
