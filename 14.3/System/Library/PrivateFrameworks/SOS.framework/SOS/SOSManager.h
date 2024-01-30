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
+ (void)_beginSOSCallWithCompletion:(id /* block */)a0 triggerMechanism:(long long)a1;
+ (BOOL)shouldTriggerSOS;
+ (void)triggerSOS;
+ (void)notifySOSTriggerMechanismChanged;
+ (void)triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
+ (BOOL)deviceSupportsSOS;
+ (long long)TPInCallUILaunchReasonForSOSTriggerMechanism:(long long)a0;
+ (void)triggerSOSWithCompletion:(id /* block */)a0;
+ (void)_triggerSOSWithUUID:(id)a0 triggerMechanism:(long long)a1 completion:(id /* block */)a2;
+ (void)triggerSOSWithUUID:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (BOOL)longPressTriggersEmergencySOS;
- (void)setSendingLocationUpdate:(BOOL)a0;
- (BOOL)isSendingLocationUpdate;
- (void)didDismissClientSOSBeforeSOSCall:(long long)a0;
- (void)_waitForInitialState;
- (void)startSendingLocationUpdateWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSInteractiveState:(long long)a0;
- (void)_resetStateWithCompletion:(id /* block */)a0;
- (void)stopSendingLocationUpdate;
- (void)mostRecentLocationSentWithCompletion:(id /* block */)a0;
- (void)willStartSendingLocationUpdate;
- (void)addObserver:(id)a0 queue:(id)a1;
- (void)didDismissSOSBeforeSOSCall:(long long)a0;
- (void)setLongPressTriggersEmergencySOS:(BOOL)a0;
- (void)dismissClientSOSWithCompletion:(id /* block */)a0;
- (void)updateClientCurrentSOSInitiationState:(long long)a0;
- (id)remoteSOSEngineProxy;
- (void)dismissSOSWithCompletion:(id /* block */)a0;

@end
