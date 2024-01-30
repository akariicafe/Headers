@class NSString, HDSPEnvironment;
@protocol HDSPIDSService, HDSPSource, HKSPQueueBackedScheduler;

@interface HDSPIDSServiceManager : NSObject <IDSServiceDelegate, HDSPSource, HDSPEnvironmentAware, HDSPSleepActionObserver>

@property (readonly, nonatomic) id<HDSPIDSService> service;
@property (readonly, nonatomic) id<HKSPQueueBackedScheduler> scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, nonatomic) id<HDSPSource> targetSource;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)goodMorningWasDismissed:(id)a0;
- (void)wakeNotificationWasConfirmed:(id)a0;
- (void)bedtimeWasDelayed:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)windDownWasSkipped:(id)a0;
- (void)_handleSetSleepModeMessage:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)_handleDelayBedtimeMessage:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)bedtimeWasSkipped:(id)a0;
- (void)sleepModeSet:(long long)a0 source:(id)a1;
- (void)_handleSkipBedtimeMessage:(id)a0;
- (void)_handleSkipWindDownMessage:(id)a0;
- (id)initWithEnvironment:(id)a0 idsService:(id)a1 scheduler:(id)a2;
- (void)_handleNotifiedForEarlyWakeUpMessage:(id)a0;
- (void)_handleReceivedMessage:(id)a0;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4 context:(id)a5;
- (void)sendNotifiedForEarlyWakeUpMessage;
- (void)_handleDismissGoodMorningMessage:(id)a0;
- (void)_handleConfirmWakeUpMessage:(id)a0;
- (void)environmentWillBecomeReady:(id)a0;
- (void)_sendSerializedMessage:(id)a0 originalMessage:(id)a1;

@end
