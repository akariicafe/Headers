@class NSString, HDSPEnvironment;

@interface HDSPDistributedNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)tearDownNotifications;

@end
