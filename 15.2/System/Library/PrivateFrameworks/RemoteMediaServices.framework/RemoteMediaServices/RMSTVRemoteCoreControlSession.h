@class NSString, TVRCDevice, RMSService, NSObject;
@protocol RMSControlSessionDelegate, OS_dispatch_queue;

@interface RMSTVRemoteCoreControlSession : NSObject <TVRCDeviceDelegate, RMSControlSession> {
    NSObject<OS_dispatch_queue> *_queue;
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

- (void)logout;
- (void).cxx_destruct;
- (id)init;
- (void)deviceConnected:(id)a0;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
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
- (BOOL)deviceShouldAllowConnectionAuthentication:(id)a0;
- (void)device:(id)a0 encounteredAuthenticationChallenge:(id)a1;
- (void)device:(id)a0 disconnectedForReason:(long long)a1 error:(id)a2;

@end
