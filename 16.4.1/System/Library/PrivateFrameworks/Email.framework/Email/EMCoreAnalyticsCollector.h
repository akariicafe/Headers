@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject

@property (readonly, nonatomic) EFLocked *periodicDataProviders;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;
@property (readonly, nonatomic) id<EFScheduler> registrationScheduler;
@property (nonatomic) BOOL registered;

+ (id)log;

- (void)_registerXPCActivity;
- (void)logOneTimeEvent:(id)a0;
- (void)_logPeriodicEvents;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
