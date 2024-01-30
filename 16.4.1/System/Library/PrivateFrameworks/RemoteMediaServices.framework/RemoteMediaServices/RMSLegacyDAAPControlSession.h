@class RMSDAAPNowPlayingManager, NSString, RMSDAAPTouchRemoteManager, RMSNowPlayingInfo, RMSService, RMSDAAPRequestManager, RMSDAAPLoginManager;
@protocol RMSControlSessionDelegate;

@interface RMSLegacyDAAPControlSession : NSObject <RMSDAAPNowPlayingManagerDelegate, RMSDAAPRequestManagerDelegate, RMSDAAPTouchRemoteManagerDelegate, RMSControlSession> {
    RMSDAAPRequestManager *_requestManager;
    RMSDAAPLoginManager *_loginManager;
    RMSDAAPNowPlayingManager *_nowPlayingManager;
    RMSDAAPTouchRemoteManager *_touchRemoteManager;
    RMSNowPlayingInfo *_nowPlayingInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RMSControlSessionDelegate> delegate;
@property (readonly, nonatomic) RMSService *service;

- (void)dealloc;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)logout;
- (void).cxx_destruct;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
- (void)_initializeManagersWithControlInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)_stringFromRMSPlaybackCommand:(long long)a0;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)beginObservingNowPlaying;
- (void)endObservingNowPlaying;
- (void)nowPlayingManager:(id)a0 artworkDataDidBecomeAvailable:(id)a1 identifier:(id)a2;
- (void)nowPlayingManager:(id)a0 didUpdateAudioRoutes:(id)a1;
- (void)nowPlayingManager:(id)a0 didUpdateNowPlayingInfo:(id)a1;
- (void)nowPlayingManager:(id)a0 didUpdateVolume:(float)a1;
- (void)pickAudioRoute:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestManagerFailedWithUnauthorizedError:(id)a0;
- (void)requestManagerFailedWithUnknownError:(id)a0;
- (void)seekToPlaybackTime:(int)a0 completionHandler:(id /* block */)a1;
- (void)sendNavigationCommand:(long long)a0;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)setVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)touchRemoteManagerDidDisconnect:(id)a0;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 allowPairing:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
