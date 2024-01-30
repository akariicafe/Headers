@class NSString, HDSPEnvironment;
@protocol HDSPIDSService, HDSPSource;

@interface HDSPIDSServiceManager : NSObject <HDSPSource, HDSPIDSServiceDelegate, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver>

@property (readonly, nonatomic) id<HDSPIDSService> localService;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (void)_sendMessage:(id)a0 onService:(id)a1;
+ (id)_allowedMessageClasses;

- (void)wakeNotificationWasConfirmed;
- (void)environmentDidBecomeReady:(id)a0;
- (void)goodMorningWasDismissed;
- (id)initWithEnvironment:(id)a0 localService:(id)a1;
- (void)sendMessage:(id)a0;
- (void)_handleNotifiedForEarlyWakeUpMessage:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (BOOL)_shouldSyncSleepModeWithReason:(unsigned long long)a0;
- (void)sendNotifiedForEarlyWakeUpMessage;
- (void)service:(id)a0 didReceiveMessage:(id)a1;
- (void).cxx_destruct;
- (id)initWithEnvironment:(id)a0;
- (void)_handleConfirmWakeUpMessage:(id)a0;
- (void)_handleDismissGoodMorningMessage:(id)a0;
- (void)_handleReceivedMessage:(id)a0;
- (BOOL)_shouldSyncMessage;
- (void)_handleSetSleepModeMessage:(id)a0;
- (void)sleepModeDidChange:(long long)a0 previousMode:(long long)a1 reason:(unsigned long long)a2;

@end
