@class TVRMSDAAPTouchRemoteManager, NSString, TVRMSService, TVRMSDAAPRequestManager, TVRMSNowPlayingInfo, TVRMSDAAPNowPlayingManager, TVRMSDAAPLoginManager;
@protocol TVRMSDAAPControlSessionDelegate;

@interface TVRMSDAAPControlSession : NSObject <TVRMSDAAPNowPlayingManagerDelegate, TVRMSDAAPRequestManagerDelegate, TVRMSDAAPTouchRemoteManagerDelegate, TVRMSDAAPControlSession> {
    TVRMSDAAPRequestManager *_requestManager;
    TVRMSDAAPLoginManager *_loginManager;
    TVRMSDAAPNowPlayingManager *_nowPlayingManager;
    TVRMSDAAPTouchRemoteManager *_touchRemoteManager;
    TVRMSNowPlayingInfo *_nowPlayingInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TVRMSDAAPControlSessionDelegate> delegate;
@property (readonly, nonatomic) TVRMSService *service;

+ (id)localControlSession;
+ (id)proxyControlSession;

- (void)dealloc;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void)logout;
- (void).cxx_destruct;
- (void)_initializeManagersWithControlInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)_stringFromRMSPlaybackCommand:(long long)a0;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)beginObservingNowPlaying;
- (void)clearKeyboardText;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)endObservingNowPlaying;
- (void)nowPlayingManager:(id)a0 artworkDataDidBecomeAvailable:(id)a1 identifier:(id)a2;
- (void)nowPlayingManager:(id)a0 didUpdateAudioRoutes:(id)a1;
- (void)nowPlayingManager:(id)a0 didUpdateNowPlayingInfo:(id)a1;
- (void)nowPlayingManager:(id)a0 didUpdateVolume:(float)a1;
- (void)pickAudioRoute:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestManagerFailedWithUnauthorizedError:(id)a0;
- (void)requestManagerFailedWithUnknownError:(id)a0;
- (void)seekToPlaybackTime:(int)a0 completionHandler:(id /* block */)a1;
- (void)sendKeyboardReturnCommand;
- (void)sendNavigationCommand:(long long)a0;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)setKeyboardText:(id)a0;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)setVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)touchRemoteManagerDidDisconnect:(id)a0;
- (void)touchRemoteManagerKeyboardEditingSessionDidBegin:(id)a0;
- (void)touchRemoteManagerKeyboardEditingSessionDidEnd:(id)a0;
- (void)touchRemoteManagerKeyboardEditingSessionDidUpdate:(id)a0;

@end
