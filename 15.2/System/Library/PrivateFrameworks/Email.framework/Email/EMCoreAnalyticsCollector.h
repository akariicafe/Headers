@class EFLocked;
@protocol EFScheduler;

@interface EMCoreAnalyticsCollector : NSObject

@property (readonly, nonatomic) EFLocked *periodicDataProviders;
@property (readonly, nonatomic) id<EFScheduler> oneTimeScheduler;
@property (readonly, nonatomic) id<EFScheduler> registrationScheduler;
@property (nonatomic) BOOL registered;

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (void)_registerXPCActivity;
- (void)_logPeriodicEvents;
- (id)registerForLogEventsWithPeriodicDataProvider:(id)a0;
- (void)logOneTimeEvent:(id)a0;

@end
