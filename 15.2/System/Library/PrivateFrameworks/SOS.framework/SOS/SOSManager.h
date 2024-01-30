@class NSString, NSMapTable, NSXPCConnection, NSObject;
@protocol OS_dispatch_semaphore;

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol> {
    BOOL _sendingLocationUpdate;
    long long _sosInitiationState;
    long long _sosInteractiveState;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (readonly, nonatomic) NSMapTable *observerToQueue;
@property (copy, nonatomic) NSString *mostRecentSOSActivationReason;
@property (nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;
@property (nonatomic) long long currentSOSInitiationState;
@property (nonatomic) long long currentSOSInteractiveState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)triggerSOS;
+ (long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)a0;
+ (BOOL)deviceSupportsSOS;
+ (void)triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
+ (void)_triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
+ (void)_beginSOSCallWithCompletion:(id /* block */)a0 triggerMechanism:(long long)a1;
+ (BOOL)shouldTriggerSOS;
+ (BOOL)_isRunningInSOSTool;
+ (void)triggerSOSWithUUID:(id)a0 completion:(id /* block */)a1;
+ (void)triggerSOSWithCompletion:(id /* block */)a0;
+ (void)notifySOSTriggerMechanismChanged;

- (id)remoteSOSEngineProxy;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)dismissSOSWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (void)willStartSendingLocationUpdate;
- (void)_resetStateWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSInitiationState:(long long)a0;
- (void)stopSendingLocationUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)dismissClientSOSWithCompletion:(id /* block */)a0;
- (BOOL)longPressTriggersEmergencySOS;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)a0;
- (void)didDismissClientSOSBeforeSOSCall:(long long)a0;
- (BOOL)isSendingLocationUpdate;
- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (void)dealloc;
- (void)updateClientCurrentSOSInteractiveState:(long long)a0;
- (void)_waitForInitialState;
- (void)setLongPressTriggersEmergencySOS:(BOOL)a0;
- (void)setSendingLocationUpdate:(BOOL)a0;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)a0;

@end
