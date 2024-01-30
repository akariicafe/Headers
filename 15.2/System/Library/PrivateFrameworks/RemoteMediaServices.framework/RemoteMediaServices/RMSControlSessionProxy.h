@class NSString, RMSIDSClient, RMSService, RMSNowPlayingInfo;
@protocol RMSControlSessionDelegate;

@interface RMSControlSessionProxy : RMSSessionProxy <RMSControlSession> {
    RMSIDSClient *_idsClient;
    RMSNowPlayingInfo *_nowPlayingInfo;
}

@property (weak, nonatomic) id<RMSControlSessionDelegate> delegate;
@property (readonly, nonatomic) RMSService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logout;
- (void).cxx_destruct;
- (id)init;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleSessionDidEndNotification:(id)a0;
- (void)heartbeatDidFail;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 allowPairing:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)beginObservingNowPlaying;
- (void)endObservingNowPlaying;
- (void)pickAudioRoute:(id)a0 completionHandler:(id /* block */)a1;
- (void)setVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)seekToPlaybackTime:(int)a0 completionHandler:(id /* block */)a1;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendNavigationCommand:(long long)a0;
- (void)_handleDidReceivePairingChallengeRequestNotification:(id)a0;
- (void)_handleNowPlayingInfoDidUpdateNotification:(id)a0;
- (void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)a0;
- (void)_handleAudioRoutesDidUpdateNotification:(id)a0;
- (void)_handleVolumeDidUpdateNotification:(id)a0;
- (void)_handleDidBeginEditingTextNotification:(id)a0;
- (void)_handleDidEndEditingTextNotification:(id)a0;
- (void)_notifyDelegateForArtworkChange;

@end
