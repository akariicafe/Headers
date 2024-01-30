@class NSString, HDSPEnvironment;
@protocol HDSPIDSService;

@interface HDSPIDSServiceManager : NSObject <HDSPSource, HDSPIDSServiceDelegate, HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver>

@property (readonly, nonatomic) id<HDSPIDSService> localService;
@property (readonly, nonatomic) id<HDSPIDSService> cloudService;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (void)_sendMessage:(id)a0 onService:(id)a1;
+ (id)_allowedMessageClasses;

- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;
- (void)goodMorningWasDismissed;
- (void)service:(id)a0 didReceiveMessage:(id)a1;
- (void)_handleReceivedMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)notificationListener:(id)a0 didReceiveNotificationWithName:(id)a1;
- (BOOL)_shouldSyncMessage;
- (BOOL)_shouldSyncAlarmMessageFromSource:(unsigned long long)a0;
- (void)_handleConfirmWakeUpMessage:(id)a0;
- (BOOL)_shouldHandleMessageFromService:(id)a0;
- (void)_handleSetSleepModeMessage:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)wakeNotificationWasConfirmed;
- (BOOL)_shouldSyncSleepModeWithReason:(unsigned long long)a0;
- (void)sendNotifiedForEarlyWakeUpMessage;
- (void)environmentWillBecomeReady:(id)a0;
- (void)sendTestIDSMessage;
- (void)_handleNotifiedForEarlyWakeUpMessage:(id)a0;
- (void)wakeUpAlarmWasDismissedFromSource:(unsigned long long)a0;
- (void)_handleSleepAlarmSnoozedMessage:(id)a0;
- (BOOL)_shouldSendCloudMessage:(id)a0;
- (void)wakeUpAlarmWasSnoozedFromSource:(unsigned long long)a0;
- (void)_handleSleepAlarmDismissedMessage:(id)a0;
- (void)_handleTestMessage:(id)a0;
- (id)initWithEnvironment:(id)a0 localService:(id)a1 cloudService:(id)a2;
- (void).cxx_destruct;
- (void)_handleDismissGoodMorningMessage:(id)a0;

@end
