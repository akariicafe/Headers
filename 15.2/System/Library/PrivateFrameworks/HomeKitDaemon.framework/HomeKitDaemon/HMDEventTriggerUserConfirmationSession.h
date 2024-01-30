@class NSUUID, NSString, NSSet, HMDEventTriggerExecutionSession, HMDEventTriggerDevice, HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent, NSMutableArray, NSObject, HMDTriggerConfirmationTimer;
@protocol OS_dispatch_queue;

@interface HMDEventTriggerUserConfirmationSession : HMDEventTriggerSession <HMFDumpState, HMFLogging, HMFTimerDelegate, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (weak, nonatomic) HMDEventTriggerExecutionSession *executionSession;
@property (readonly, nonatomic) HMDEventTriggerDevice *requestingDevice;
@property (retain, nonatomic) HMDTriggerConfirmationTimer *userResponseTimer;
@property (retain, nonatomic) HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent *analyticsEvent;
@property (retain, nonatomic) NSMutableArray *analyticsSendEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_registerForMessages;
- (void)_sessionComplete;
- (void)userDidConfirmExecute:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)createBulletinNotification;
- (id)initWithSessionID:(id)a0 eventTrigger:(id)a1 workQueue:(id)a2 msgDispatcher:(id)a3 requestingDevice:(id)a4;
- (void)askForUserPermission:(id)a0;
- (void)_askForUserPermissionFromDevice:(id)a0 executionSessionID:(id)a1;
- (void)_createBulletinNotification;
- (void)_userResponse:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_handleUserPermissionRemoteResponse:(id)a0;
- (void)_removeUserDialog:(id)a0;
- (void)_handleUserPermissionRemoveDialogRequest:(id)a0;

@end
