@class NSString, NSCalendar, NSTimer, NSDate;
@protocol BSRelativeDateTimerDelegate;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {
    NSCalendar *_gregorian;
    NSTimer *_timer;
    NSDate *_date;
    unsigned long long _currResolution;
    long long _currValue;
}

@property (weak, nonatomic) id<BSRelativeDateTimerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)date;
- (void)_fireForLocaleEvent:(id)a0;
- (void)fireAndSchedule;
- (void)_fireAndUpdateTimerIfNecessary;
- (double)nextFireInterval;
- (void)powerMonitorSystemDidWakeFromSleep:(id)a0;
- (void)setDate:(id)a0;
- (void)invalidate;

@end
