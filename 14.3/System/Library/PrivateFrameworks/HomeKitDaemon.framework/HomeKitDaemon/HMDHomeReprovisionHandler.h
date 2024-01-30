@class NSUUID, NSString, HMFTimer, NSSet, NSMutableDictionary, HMFMessageDispatcher, NSObject, HMDHome;
@protocol OS_dispatch_queue, HMDAccessoryBrowserProtocol;

@interface HMDHomeReprovisionHandler : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver>

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (weak, nonatomic) HMDHome *home;
@property (weak, nonatomic) id<HMDAccessoryBrowserProtocol> accessoryBrowser;
@property (nonatomic, getter=isReprovisionBrowsingAllowed) BOOL reprovisionBrowsingAllowed;
@property (nonatomic, getter=isReprovisionBrowsingPending) BOOL reprovisionBrowsingPending;
@property (retain, nonatomic) HMFTimer *disableReprovisionBrowsingTimer;
@property (retain, nonatomic) NSMutableDictionary *pendingReprovisionRequests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerDidFire:(id)a0;
- (void)_registerForMessages;
- (id)messageDestination;
- (id)logIdentifier;
- (void)configure:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)a0 error:(id)a1;
- (void)handleReprovionedAccessory:(id)a0 identifier:(id)a1 error:(id)a2;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)a0;
- (void)_handleReprovisionAccessory:(id)a0;
- (void)_reportAccessoryNeedingReprovision:(id)a0 error:(id)a1;
- (void)_reprovisionAccessory:(id)a0 networkCredential:(id)a1 requestMessage:(id)a2;
- (void)_handleDisableReprovisionBrowsingTimerFired;

@end
