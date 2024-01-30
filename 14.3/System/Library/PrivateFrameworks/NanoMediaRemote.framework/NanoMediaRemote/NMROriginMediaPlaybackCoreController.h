@class MPCPlayerPath, MPRequestResponseController, NSString, NMROrigin, NMRNowPlayingState, NSObject, NMRPlaybackQueue, NMRPlayerResponseNowPlayingState;
@protocol OS_dispatch_queue, NMROriginObserverDelegate;

@interface NMROriginMediaPlaybackCoreController : NSObject <MPRequestResponseControllerDelegate, NMROriginObserver, NMROriginCommandHandler> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isEnforcingApplicationFilter;
    MPCPlayerPath *_playerPath;
    unsigned long long _filteringOptions;
    MPRequestResponseController *_requestResponseController;
    NMRPlayerResponseNowPlayingState *_nowPlayingState;
    unsigned long long _numberOfConsecutiveFailuresToResolve;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NMROrigin *origin;
@property (readonly, nonatomic) NMRNowPlayingState *nowPlayingState;
@property (readonly, nonatomic) NMRPlaybackQueue *playbackQueue;
@property (weak, nonatomic) id<NMROriginObserverDelegate> delegate;
@property (nonatomic) BOOL shouldObservePlaybackQueue;
@property (nonatomic) BOOL shouldObserveArtwork;
@property (nonatomic) BOOL shouldObserveLibraryAddStatus;

- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (void).cxx_destruct;
- (void)beginObserving;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)endObserving;
- (id)_requestResponseController;
- (void)_updateIsEnforcingApplicationFilterWithNowPlayingState:(id)a0;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleID;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)_notifyObserversOfUpdatedTimestamp;
- (void)_notifyObserversOfUpdatedPlaybackQueue;
- (void)_asyncToSerialQueueCheckingProcessWithBlock:(id /* block */)a0;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)a0;
- (void)sendMediaRemoteCommand:(unsigned int)a0 options:(id)a1 userInitiated:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithPlayerPath:(id)a0 options:(unsigned long long)a1;

@end
