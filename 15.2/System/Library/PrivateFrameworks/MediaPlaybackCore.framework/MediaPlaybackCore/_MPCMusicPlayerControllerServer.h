@class MPMusicPlayerControllerSystemCache, NSXPCListener, MPCPlaybackEngine, NSXPCListenerEndpoint, NSString, NSMutableArray, MPMusicPlayerQueueDescriptor;

@interface _MPCMusicPlayerControllerServer : NSObject <MPMusicPlayerControllerSystemServer, MPMusicPlayerControllerApplicationServer, NSXPCListenerDelegate, MPCPlaybackEngineEventObserving> {
    MPMusicPlayerQueueDescriptor *_queueDescriptor;
    MPMusicPlayerQueueDescriptor *_preparingDescriptor;
    id /* block */ _prepareCompletionHandler;
    BOOL _skipWaitingForLikelyToKeepUp;
    BOOL _resumed;
}

@property (readonly, nonatomic) MPMusicPlayerControllerSystemCache *systemCache;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSMutableArray *activeConnections;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_timeSnapshotWithElapsedTime:(double)a0 rate:(float)a1;
- (void)_handleCommandHandlersRegistered:(id)a0;
- (void)engine:(id)a0 didReachEndOfQueueWithReason:(id)a1;
- (void)setDisableAutomaticCanBeNowPlaying:(BOOL)a0;
- (void)setRelativeVolume:(float)a0;
- (void)_addContentItemIDsToUpdateRecord:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)prerollWithCompletion:(id /* block */)a0;
- (void)appendDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)setDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)getRepeatModeWithReply:(id /* block */)a0;
- (id)_nowPlayingWithItem:(id)a0;
- (void)startServer;
- (void)resumeIfNeeded;
- (void)setNowPlayingItem:(id)a0 itemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)engine:(id)a0 didEndPlaybackOfItem:(id)a1;
- (void)engine:(id)a0 didResetQueueWithPlaybackContext:(id)a1 error:(id)a2;
- (void)performQueueModifications:(id)a0 completion:(id /* block */)a1;
- (void)getNowPlayingAtIndex:(long long)a0 reply:(id /* block */)a1;
- (void)setElapsedTime:(double)a0 completion:(id /* block */)a1;
- (void)engine:(id)a0 didChangeQueueWithReason:(id)a1;
- (void)getShuffleModeWithReply:(id /* block */)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)setRepeatMode:(long long)a0;
- (void)beginPlaybackAtHostTime:(id)a0;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (void)pauseWithFadeDuration:(long long)a0;
- (void)getDescriptorWithReply:(id /* block */)a0;
- (void)play;
- (void)getNowPlayingWithReply:(id /* block */)a0;
- (void)prependDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_applyServerStateUpdateRecord:(id)a0;
- (void)engine:(id)a0 didChangeToState:(unsigned long long)a1;
- (void)getTimeSnapshotWithReply:(id /* block */)a0;
- (void)engine:(id)a0 didChangeShuffleType:(long long)a1;
- (void)engine:(id)a0 didChangeToItem:(id)a1;
- (void)stopServer;
- (void)setPlaybackRate:(float)a0 completion:(id /* block */)a1;
- (void)reshuffle;
- (void)engine:(id)a0 didChangeItemElapsedTime:(double)a1 rate:(float)a2;
- (void)endSeek;
- (void)getImageForArtworkIdentifier:(id)a0 itemIdentifier:(id)a1 atSize:(struct CGSize { double x0; double x1; })a2 reply:(id /* block */)a3;
- (void)skipWithBehavior:(long long)a0;
- (void)getNowPlayingsForContentItemIDs:(id)a0 reply:(id /* block */)a1;
- (void)_registerForCommandHandlersRegisteredNotification;
- (void)getUserQueueModificationsDisabledWithReply:(id /* block */)a0;
- (void)engine:(id)a0 didChangeRepeatType:(long long)a1;
- (void)stop;
- (void)beginSeekWithDirection:(long long)a0;
- (void)engine:(id)a0 didAchieveLikelyToKeepUpWithItem:(id)a1;
- (void)setShuffleMode:(long long)a0;

@end
