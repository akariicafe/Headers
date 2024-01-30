@class NSMutableSet, NSDate;
@protocol SATimeEventRequestProtocol;

@interface SATime : NSObject <SATimeServiceProtocol>

@property (retain, nonatomic) NSMutableSet *ongoingAlarms;
@property (nonatomic) void *alarmQueue;
@property (weak, nonatomic) id<SATimeEventRequestProtocol> externalTimer;
@property (readonly, nonatomic) NSDate *now;

- (void)addAlarm:(id)a0;
- (id)setupAlarmFireAt:(id)a0 forClient:(id)a1;
- (void)ingestTAEvent:(id)a0;
- (id)earliestAlarm;
- (void)cancelAlarmWithUUID:(id)a0;
- (unsigned long long)alarmCount;
- (void).cxx_destruct;
- (void)advanceTimeWithEvent:(id)a0;
- (void)alarmFired:(id)a0;
- (void)fireAlarmsIfReady;
- (void)popAlarm;
- (id)initWithExternalTimer:(id)a0;
- (void)dealloc;

@end
