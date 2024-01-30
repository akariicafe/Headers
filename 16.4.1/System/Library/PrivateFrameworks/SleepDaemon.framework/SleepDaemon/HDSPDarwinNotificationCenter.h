@class NSString, HDSPEnvironment;

@interface HDSPDarwinNotificationCenter : NSObject <HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)tearDownNotifications;

@end
