@class NSString, MRPlayerPath, MRAVEndpoint, MRPlayer, NSMutableArray, NSObject, MRClient, MRNowPlayingPlayerResponse, MRAVEndpointObserver;
@protocol OS_dispatch_queue, MRNowPlayingControllerDelegate;

@interface MRNowPlayingController : NSObject

@property (copy, nonatomic) MRNowPlayingPlayerResponse *response;
@property (retain, nonatomic) id playerPathInvalidationObserver;
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver;
@property (retain, nonatomic) NSString *endpointObserverGroupUID;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge;
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL registeredForEndpointChanges;
@property (nonatomic) BOOL registeredForPlayerPathInvalidations;
@property (nonatomic) BOOL updateLoadingEnabled;
@property (nonatomic) BOOL requestingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) MRPlayerPath *unresolvedPlayerPath;
@property (retain, nonatomic) MRPlayerPath *resolvedPlayerPath;
@property (retain, nonatomic) MRAVEndpoint *endpoint;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) MRClient *client;
@property (readonly, nonatomic) MRPlayer *player;
@property (weak, nonatomic) id<MRNowPlayingControllerDelegate> delegate;

+ (id)localRouteController;
+ (id)proactiveEndpointController;

- (void).cxx_destruct;
- (id)initWithUID:(id)a0;
- (void)dealloc;
- (void)beginLoadingUpdates;
- (id)initWithUID:(id)a0 client:(id)a1 player:(id)a2;
- (void)_unregisterForPlayerPathInvalidations;
- (void)endLoadingUpdates;
- (void)_onQueue_updateByReplacingWithNewResponse:(id)a0;
- (void)_notifyDelegateOfError:(id)a0;
- (void)_onQueue_clearState;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void)_loadNowPlayingStateForUID:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)_unregisterForEndpointChanges;
- (void)_unregisterNotificationHandlers;
- (void)_loadNowPlayingStateForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)_registerForEndpointChangesIfNeeded;
- (void)_onQueue_retrieveEndpointForUID:(id)a0 completion:(id /* block */)a1;
- (void)_registerForPlayerPathInvalidationsIfNeeded;
- (void)_registerNotificationHandlersIfNeeded;
- (id)_loadNowPlayingStateForPlayerPath:(id)a0 error:(id *)a1;
- (void)_resolvePlayerPath:(id)a0 completion:(id /* block */)a1;
- (void)_createPlayerPathForEndpoint:(id)a0 client:(id)a1 player:(id)a2 completion:(id /* block */)a3;
- (void)_requestSupportedCommandsForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_requestPlaybackQueueForPlayerPath:(id)a0 includeArtwork:(BOOL)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_handlePlaybackQueueChangedNotification:(id)a0;
- (void)_notifyDelegateOfInvalidation;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)a0;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)a0;
- (void)_handlePlaybackStateChangedNotification:(id)a0;
- (void)_handleSupportedCommandsChangedNotification:(id)a0;
- (void)_onQueue_updateWithNewPlaybackQueue:(id)a0;
- (void)_notifyDelegateOfPlaybackQueueChangeFromOldQueue:(id)a0 toNewQueue:(id)a1;
- (id)_onQueue_updateByMergingContentItemChanges:(id)a0;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)_notifyDelegateOfUpdatedContentItems:(id)a0;
- (void)_requestContentItemArtwork:(id)a0 forPlayerPath:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_onQueue_updateWithNewPlaybackState:(unsigned int)a0;
- (void)_notifyDelegateOfPlaybackStateChangeFromOldState:(unsigned int)a0 toNewState:(unsigned int)a1;
- (void)_onQueue_updateWithNewSupportedCommands:(id)a0;
- (void)_reloadForCompleteInvalidation;
- (void)_notifyDelegateOfSupportedCommandsChangeFromOldCommands:(id)a0 toNewCommands:(id)a1;
- (void)_reloadForPlayerPathInvalidation;
- (void)_handleActiveSystemEndpointChangedNotification:(id)a0;

@end
