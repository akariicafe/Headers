@class MPCPlayerPath, NSString, NSArray, MPNowPlayingInfoCenter, MPRemoteCommandCenter, MPLibraryAddStatusObserver, MPCPlaybackEngine, NSUserDefaults;

@interface _MPCMediaRemotePublisher : NSObject <MPNowPlayingPlaybackQueueDataSourcePrivate, MPCPlaybackEngineEventObserving> {
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;
    NSString *_lastContextID;
    NSArray *_accounts;
    BOOL _activeAccountAllowsSubscriptionPlayback;
    NSString *_activeAccountStoreFrontIdentifier;
    NSUserDefaults *_ipodDefaults;
    BOOL _hasBeganFastForward;
    BOOL _hasBeganRewind;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=hasInitializedSupportedCommands) BOOL initializedSupportedCommands;
@property (nonatomic, getter=isEngineRestoringState) BOOL engineRestoringState;
@property (nonatomic, getter=isMediaServerAvailable) BOOL mediaServerAvailable;
@property (readonly, nonatomic) MPCPlayerPath *playerPath;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter;
@property (readonly, nonatomic) MPRemoteCommandCenter *commandCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)engine:(id)a0 didChangeToState:(unsigned long long)a1;
- (BOOL)_playbackStateIsIdle:(long long)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)engine:(id)a0 didChangeShuffleType:(long long)a1;
- (void)becomeActive;
- (void)_disableQueueModificationsChangedNotification:(id)a0;
- (void)engineDidResetMediaServices:(id)a0;
- (void).cxx_destruct;
- (void)_performCommandEvent:(id)a0 completion:(id /* block */)a1;
- (id)nowPlayingInfoCenter:(id)a0 artworkCatalogForContentItem:(id)a1;
- (void)engine:(id)a0 didChangeQueueWithReason:(id)a1;
- (void)reportUserBackgroundedApplication;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)nowPlayingInfoCenter:(id)a0 contentItemIDsFromOffset:(long long)a1 toOffset:(long long)a2 nowPlayingIndex:(long long *)a3;
- (void)nowPlayingInfoCenter:(id)a0 willBeginSessionMigrationWithIdentifier:(id)a1;
- (void)nowPlayingInfoCenter:(id)a0 didEndLyricsEvent:(id)a1;
- (void)engineWillBeginStateRestoration:(id)a0;
- (id)_exportableSessionTypes;
- (void)_becomeActiveIfNeededWithCompletion:(id /* block */)a0;
- (void)_updateSupportedCommands;
- (void)_durationAvailableNotification:(id)a0;
- (id)_supportedSessionTypes;
- (void)nowPlayingInfoCenter:(id)a0 getTransportablePlaybackSessionRepresentationForRequest:(id)a1 completion:(id /* block */)a2;
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)a0;
- (id)nowPlayingInfoCenter:(id)a0 lyricsForContentItem:(id)a1 completion:(id /* block */)a2;
- (void)engineDidLoseMediaServices:(id)a0;
- (void)engine:(id)a0 didChangeToItem:(id)a1;
- (void)engineDidEndStateRestoration:(id)a0;
- (void)engine:(id)a0 didChangeRepeatType:(long long)a1;
- (void)_updateLaunchCommands;
- (void)getShouldRestoreStateWithCompletion:(id /* block */)a0;
- (void)_likedStateChangedNotification:(id)a0;
- (void)nowPlayingInfoCenter:(id)a0 didBeginLyricsEvent:(id)a1;
- (void)engine:(id)a0 didChangeAccounts:(id)a1;
- (id)nowPlayingInfoCenter:(id)a0 contentItemIDForOffset:(long long)a1;
- (id)nowPlayingInfoCenter:(id)a0 contentItemForID:(id)a1;
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)a0 completion:(id /* block */)a1;
- (void)engine:(id)a0 didChangeActionAtQueueEnd:(long long)a1;
- (void)nowPlayingInfoCenter:(id)a0 didEndMigrationWithIdentifier:(id)a1 error:(id)a2;
- (void)publishIfNeeded;
- (id)nowPlayingInfoCenter:(id)a0 artworkForContentItem:(id)a1 size:(struct CGSize { double x0; double x1; })a2 completion:(id /* block */)a3;

@end
