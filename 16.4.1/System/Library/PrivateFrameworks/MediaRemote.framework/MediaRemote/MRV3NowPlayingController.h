@class NSDate, NSString, MRDestinationResolver, MRNowPlayingControllerHelper, MRNowPlayingControllerDestination, NSObject, MRNowPlayingControllerConfiguration, NSMutableArray, MRNowPlayingPlayerResponse, MSVVariableIntervalTimer;
@protocol OS_dispatch_queue;

@interface MRV3NowPlayingController : NSObject <MRDestinationResolverDelegate, MRNowPlayingControllerImpl> {
    MRNowPlayingControllerHelper *_helper;
}

@property (retain, nonatomic) MRDestinationResolver *destinationResolver;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge;
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) BOOL isResolving;
@property (nonatomic) BOOL requestingQueue;
@property (retain, nonatomic) NSDate *lastQueueRequestDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MSVVariableIntervalTimer *loadRetryTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper;
@property (readonly, copy, nonatomic) MRNowPlayingControllerDestination *destination;

- (void)_notifyDelegateOfError:(id)a0;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)a0;
- (void)beginLoadingUpdates;
- (void)_requestSupportedCommandsForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)sendCommand:(unsigned int)a0 options:(id)a1 appOptions:(unsigned int)a2 completion:(id /* block */)a3;
- (void)endLoadingUpdates;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)a0;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)a0;
- (void)_handlePlaybackQueueChangedNotification:(id)a0;
- (void)_requestContentItemArtwork:(id)a0 forPlayerPath:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_notifyDelegateOfPlayerPathChange:(id)a0;
- (void)_onQueue_clearStateForResolvedPlayerPath;
- (void)dealloc;
- (void)_unregisterNotificationHandlers;
- (id)_loadNowPlayingStateForPlayerPath:(id)a0 error:(id *)a1;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)a0;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)a0;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)a0;
- (void)_handlePlaybackStateChangedNotification:(id)a0;
- (void)destinationWithCompletion:(id /* block */)a0;
- (void)_handleSupportedCommandsChangedNotification:(id)a0;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)a0;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0;
- (void)_notifyDelegateOfUpdatedArtwork:(id)a0;
- (void)_requestClientPropertiesForPlayerPath:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)_requestPlaybackQueueForPlayerPath:(id)a0 request:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)a0;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfNewResponse:(id)a0;
- (void).cxx_destruct;
- (void)_reloadWithReason:(id)a0;
- (void)_registerNotificationHandlersForResolvedPlayerPath:(id)a0;
- (void)_handleClientPropertiesDidChange:(id)a0;
- (void)beginResolving;
- (void)destinationResolver:(id)a0 didFailWithError:(id)a1;
- (void)destinationResolver:(id)a0 playerPathDidChange:(id)a1;
- (void)destinationResolverDestinationDidInvalidate:(id)a0;

@end
