@class NSString, RMSService, TVRCDevice;
@protocol RMSControlSessionDelegate;

@interface RMSTVRemoteCoreControlSession : NSObject <TVRCDeviceDelegate, RMSControlSession> {
    BOOL _allowPairing;
    TVRCDevice *_device;
    id /* block */ _connectionResponseBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<RMSControlSessionDelegate> delegate;
@property (readonly, nonatomic) RMSService *service;

- (void)dealloc;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (void)logout;
- (void).cxx_destruct;
- (void)deviceConnected:(id)a0;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)beginObservingNowPlaying;
- (void)device:(id)a0 disconnectedForReason:(long long)a1 error:(id)a2;
- (void)device:(id)a0 encounteredAuthenticationChallenge:(id)a1;
- (BOOL)deviceShouldAllowConnectionAuthentication:(id)a0;
- (void)endObservingNowPlaying;
- (void)pickAudioRoute:(id)a0 completionHandler:(id /* block */)a1;
- (void)seekToPlaybackTime:(int)a0 completionHandler:(id /* block */)a1;
- (void)sendNavigationCommand:(long long)a0;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)setVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 allowPairing:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
