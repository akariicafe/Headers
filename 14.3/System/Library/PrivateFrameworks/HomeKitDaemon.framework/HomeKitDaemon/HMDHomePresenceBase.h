@class NSSet, NSString, NSUUID, HMDHome, HMFMessageDispatcher, NSObject, HMDNotificationRegistration;
@protocol OS_dispatch_queue;

@interface HMDHomePresenceBase : HMFObject <HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (weak, nonatomic) HMDHome *home;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSString *logString;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerFired:(id)a0;
- (void)_registerForMessages;
- (id)logIdentifier;
- (void)configure:(id)a0 messageDispatcher:(id)a1;
- (void)residentChanged;
- (void)handleHomeDataLoadedNotification:(id)a0;
- (void)_initialize:(id)a0;

@end
