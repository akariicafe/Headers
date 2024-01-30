@class CARSessionStatus, NSArray, NSString, NSMutableSet, NSOperationQueue, NSObject, MPPlayableContentManagerContext;
@protocol MPPlayableContentDataSource, MPPlayableContentDelegate, OS_dispatch_queue;

@interface MPPlayableContentManager : NSObject <CARSessionObserving> {
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    BOOL _scheduledSupportedAPIsChange;
    CARSessionStatus *_currentSessionStatus;
}

@property (retain, nonatomic) MPPlayableContentManagerContext *context;
@property (weak, nonatomic) id<MPPlayableContentDataSource> dataSource;
@property (weak, nonatomic) id<MPPlayableContentDelegate> delegate;
@property (copy, nonatomic) NSArray *nowPlayingIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedContentManager;
+ (BOOL)_deviceIsCarplayCapable;

- (void)sessionDidConnect:(id)a0;
- (void)_setupNotifications;
- (void)reloadData;
- (void)endUpdates;
- (void)beginUpdates;
- (id)init;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_browsableContentEndpointChanged:(id)a0;
- (void)_limitedUIChanged:(id)a0;
- (void)_enqueueArtworkUpdate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 withCompletion:(id /* block */)a2;
- (void)dealloc;
- (BOOL)_contentItemWasSentToMediaRemote:(id)a0;
- (void)sessionDidDisconnect:(id)a0;
- (void)_enqueueArtworkUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)_pushContentItemsUpdate;
- (id)_init;
- (BOOL)_musicListsLimited;
- (void)_tearDownNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_markContentItemsAsSentToMediaRemote:(id)a0;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:(id)a0;
- (void)_setupMediaRemoteEndpoint;
- (BOOL)_areContentLimitsEnforced;
- (void)_contentItemChangedNotification:(id)a0;
- (void)_scheduleUpdateSupportedAPIs;
- (void)_updateSupportedAPIs;

@end
