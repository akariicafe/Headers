@class NSString, NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseController : NSObject <ICEnvironmentMonitorObserver, ICMusicSubscriptionLeaseSessionDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_accountDSIDToFairPlayKeyStatus;
    NSMutableDictionary *_cacheKeyToLeaseSession;
    BOOL _hasReceivedUserInteractionEvent;
    BOOL _isRemoteServerLikelyReachable;
    BOOL _isServerReachable;
    NSString *_lastKnownHouseholdID;
    int _leaseDidEndNotificationToken;
    NSOperationQueue *_leaseSessionPreparationOperationQueue;
}

@property (class, readonly) ICMusicSubscriptionLeaseController *sharedController;

@property (readonly, copy, nonatomic) NSString *lastKnownHouseholdID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receivedUserInteractionEvent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getLastKnownHouseholdIDWithCompletion:(id /* block */)a0;
- (void)musicLeaseSession:(id)a0 requestsFairPlayKeyStatusUpdateWithCompletion:(id /* block */)a1;
- (void)getLeaseSessionWithRequestContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (id)_init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)musicLeaseSession:(id)a0 didFinishPlaybackRequest:(id)a1 withPlaybackResponse:(id)a2 responseError:(id)a3 updatedFairPlayKeyStatusList:(id)a4 completionHandler:(id /* block */)a5;

@end
