@class NMRNowPlayingState, NMRPlaybackQueue, NSString, NMROrigin;
@protocol NMROriginCommandHandler, NMROriginObserverDelegate, NMROriginObserver;

@interface NMROriginController : NSObject <NMROriginObserver, NMROriginObserverDelegate, NMROriginCommandHandler> {
    BOOL _isObserving;
    BOOL _hasPendingNowPlayingInfoChange;
    BOOL _hasPendingElapsedTimeChange;
    BOOL _hasPendingPlaybackStateChange;
    BOOL _hasPendingSupportedCommandsChange;
    BOOL _hasPendingNowPlayingApplicationBundleIdentifierChange;
    BOOL _hasPendingTimestampChange;
    BOOL _hasPendingPlaybackQueueChange;
}

@property (retain, nonatomic) id<NMROriginObserver> originObserver;
@property (retain, nonatomic) id<NMROriginCommandHandler> originCommandHandler;
@property (readonly, nonatomic) NMROrigin *origin;
@property (readonly, nonatomic) NMRNowPlayingState *nowPlayingState;
@property (readonly, nonatomic) NMRPlaybackQueue *playbackQueue;
@property (weak, nonatomic) id<NMROriginObserverDelegate> delegate;
@property (nonatomic) BOOL shouldObservePlaybackQueue;
@property (nonatomic) BOOL shouldObserveArtwork;
@property (nonatomic) BOOL shouldObserveLibraryAddStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endObserving;
- (void).cxx_destruct;
- (void)beginObserving;
- (void)_notifyObserverOfUpdatedNowPlayingInfo;
- (void)_notifyObserverOfUpdatedPlaybackState;
- (void)_notifyObserverOfUpdatedSupportedCommands;
- (void)_notifyObserverOfUpdatedElapsedTime;
- (void)originObserver:(id)a0 didUpdateNowPlayingInfoForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateNowPlayingApplicationBundleIdentifierForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdatePlaybackStateForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateSupportedCommandsForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateElapsedTimeForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdateTimestampForOrigin:(id)a1;
- (void)originObserver:(id)a0 didUpdatePlaybackQueueForOrigin:(id)a1;
- (void)updateNowPlayingStateWithCompletion:(id /* block */)a0;
- (void)sendMediaRemoteCommand:(unsigned int)a0 options:(id)a1 userInitiated:(BOOL)a2 completion:(id /* block */)a3;
- (id)initWithOrigin:(id)a0 options:(unsigned long long)a1;
- (void)_notifyObserverOfUpdatedNowPlayingApplicationBundleIdentifier;
- (void)_notifyObserverOfUpdatedTimestamp;
- (void)_notifyObserverOfUpdatedPlaybackQueue;

@end
