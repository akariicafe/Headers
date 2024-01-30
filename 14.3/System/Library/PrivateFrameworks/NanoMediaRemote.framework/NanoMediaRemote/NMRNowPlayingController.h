@class NSArray, NSString, NSMapTable, NMROrigin, NSHashTable, NSObject;
@protocol OS_dispatch_queue, NMRNowPlayingControllerDelegate;

@interface NMRNowPlayingController : NSObject <NMROriginObserverDelegate> {
    unsigned long long _registeredObserversCount;
    NSMapTable *_originControllers;
    NSHashTable *_observerDelegates;
    NMROrigin *_activeNowPlayingOrigin;
    NSString *_activeNowPlayingOriginExplanationLog;
    NSArray *_nowPlayingOrigins;
    BOOL _shouldObserveArtwork;
    BOOL _shouldObservePlaybackQueue;
    BOOL _shouldObserveLibraryAddStatus;
    id<NMRNowPlayingControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
}

@property (weak, nonatomic) id<NMRNowPlayingControllerDelegate> delegate;
@property (nonatomic) BOOL shouldObservePlaybackQueue;
@property (nonatomic) BOOL shouldObserveArtwork;
@property (nonatomic) BOOL shouldObserveLibraryAddStatus;
@property (readonly, nonatomic) NMROrigin *activeNowPlayingOrigin;
@property (readonly, nonatomic) NSArray *nowPlayingOrigins;
@property (readonly, nonatomic) unsigned long long filteringOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOptions:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)originObserver:(id)a0 didUpdateNowPlayingInfoForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdatePlaybackStateForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateSupportedCommandsForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateElapsedTimeForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateTimestampForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdatePlaybackQueueForOrigin:(id)a1;
- (void)_setupOriginControllers;
- (id)_nowPlayingStateForOrigin:(id)a0;
- (id)_originControllerForOrigin:(id)a0;
- (void)_updateNowPlayingStateForOrigin:(id)a0 completion:(id /* block */)a1;
- (void)_evaluateNowPlayingOrigins;
- (id)nowPlayingStateForOrigin:(id)a0;
- (id)launchBundleIdentifierForOrigin:(id)a0;
- (void)_enumerateObserverDelegates:(id /* block */)a0;
- (void)_handleAvailableOriginsDidChangeNotification:(id)a0;
- (void)_addOriginControllerWithOrigin:(id)a0;
- (BOOL)_shouldObserveOrigin:(id)a0;
- (void)_removeOriginControllerWithOrigin:(id)a0;
- (id)_evaluateNowPlayingOriginsFromOrigins:(id)a0;
- (id)_evaluateActiveNowPlayingOriginForOrderedOrigins:(id)a0;
- (void)sendMediaRemoteCommand:(unsigned int)a0 toOrigin:(id)a1 options:(id)a2 launchApp:(BOOL)a3 completion:(id /* block */)a4;
- (void)sendMediaRemoteCommand:(unsigned int)a0 options:(id)a1 userInitiated:(BOOL)a2 toOrigin:(id)a3 completion:(id /* block */)a4;
- (id)playbackQueueForOrigin:(id)a0;
- (void)updateNowPlayingStateForOrigin:(id)a0 completion:(id /* block */)a1;
- (void)updateNowPlayingStateForAllOriginsWithCompletion:(id /* block */)a0;
- (id)launchNowPlayingURLForOrigin:(id)a0;
- (void)addObserverDelegate:(id)a0;
- (void)removeObserverDelegate:(id)a0;
- (void)beginObservingOrigins;
- (void)endObservingOrigins;
- (void)setOriginObserver:(id)a0 forOrigin:(id)a1;
- (void)setOriginCommandHandler:(id)a0 forOrigin:(id)a1;
- (void)sendMediaRemoteCommand:(unsigned int)a0 toOrigin:(id)a1 options:(id)a2 launchApp:(BOOL)a3;

@end
