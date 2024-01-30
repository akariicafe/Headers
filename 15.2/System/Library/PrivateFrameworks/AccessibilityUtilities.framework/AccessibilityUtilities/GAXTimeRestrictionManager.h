@class AXAccessQueue, NSMutableSet, AXAccessQueueTimer, NSDate, NSMutableArray;
@protocol GAXTimeRestrictionManagerDelegate;

@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long expirationDurationInSeconds;
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer;
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds;
@property (retain, nonatomic) NSMutableArray *alarmTimers;
@property (weak, nonatomic) id<GAXTimeRestrictionManagerDelegate> delegate;
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue;
@property (readonly, nonatomic) long long remainingTimeInSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)pause;
- (void)_addAlarmForDuration:(long long)a0;
- (void)_scheduleTimers;
- (void)_removeAllTimers;
- (void)_removeAllAlarmTimers;
- (void)_removeExpirationTimer;
- (id)initWithAssertedAccessQueue:(id)a0;
- (void)beginWithDuration:(long long)a0;
- (void)resume;
- (void)cancel;

@end
