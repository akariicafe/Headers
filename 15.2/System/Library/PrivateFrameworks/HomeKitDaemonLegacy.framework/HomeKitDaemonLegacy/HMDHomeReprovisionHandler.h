@class NSUUID, NSString, HMFTimer, NSSet, NSMutableDictionary, HMFMessageDispatcher, NSObject, HMDHome;
@protocol OS_dispatch_queue, HMDAccessoryBrowserProtocol;

@interface HMDHomeReprovisionHandler : HMFObject <HMFTimerDelegate, HMFLogging, HMDHomeMessageReceiver> {
    BOOL _reprovisionBrowsingAllowed;
    BOOL _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    id<HMDAccessoryBrowserProtocol> _accessoryBrowser;
    HMFTimer *_disableReprovisionBrowsingTimer;
    NSMutableDictionary *_pendingReprovisionRequests;
}

@property (class, readonly) BOOL hasMessageReceiverChildren;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handleReprovionedAccessory:(id)a0 identifier:(id)a1 error:(id)a2;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)a0 error:(id)a1;
- (void)configure:(id)a0 queue:(id)a1 messageDispatcher:(id)a2;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)a0;
- (void)_handleReprovisionAccessory:(id)a0;

@end
