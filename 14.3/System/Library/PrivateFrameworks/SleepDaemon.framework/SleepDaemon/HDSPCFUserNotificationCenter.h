@class NSString, NSMutableDictionary, HDSPEnvironment;
@protocol HDSPSource;

@interface HDSPCFUserNotificationCenter : NSObject <HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } notificationLock;
@property (readonly, nonatomic) NSMutableDictionary *notifications;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)environmentDidBecomeReady:(id)a0;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (void).cxx_destruct;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (void)tearDownNotifications;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)a0;
- (void)_publishNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 otherButtonTitle:(id)a4 bypassDND:(BOOL)a5 actionHandler:(id /* block */)a6;
- (void)handleResponse:(unsigned long long)a0 forUserNotification:(id)a1;

@end
