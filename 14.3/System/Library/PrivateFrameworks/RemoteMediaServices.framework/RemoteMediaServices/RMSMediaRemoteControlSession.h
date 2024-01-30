@class RMSService, NSString;
@protocol RMSControlSessionDelegate;

@interface RMSMediaRemoteControlSession : NSObject <RMSControlSession> {
    void *_television;
    id /* block */ _connectionResponseBlock;
    void *_textEditingSession;
    BOOL _observingNowPlaying;
    void *_origin;
    unsigned int _state;
}

@property (weak, nonatomic) id<RMSControlSessionDelegate> delegate;
@property (readonly, nonatomic) RMSService *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateNowPlayingInfo;
- (void)logout;
- (void)sendText:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 allowPairing:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)beginObservingNowPlaying;
- (void)endObservingNowPlaying;
- (void)sendPlaybackCommand:(long long)a0 completionHandler:(id /* block */)a1;
- (void)pickAudioRoute:(id)a0 completionHandler:(id /* block */)a1;
- (void)setVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)seekToPlaybackTime:(int)a0 completionHandler:(id /* block */)a1;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1;
- (void)sendNavigationCommand:(long long)a0;
- (BOOL)_isSystemVersionSupported:(void *)a0;
- (BOOL)_isPairingAllowed:(void *)a0;
- (void)_didReceivePairingCallbackWithCredentials:(struct { unsigned int x0; unsigned long long x1; })a0 completion:(id /* block */)a1;
- (void)_didReceiveConnectionStateCallbackWithConnectionState:(unsigned int)a0 error:(struct __CFError { } *)a1;
- (void)_handleConnected;
- (void)_endObservingTextEditingEvents;
- (void)_handleMediaRemoteOriginNowPlayingInfoDidChangeNotification:(id)a0;
- (void)_handleMediaRemoteNowPlayingApplicationPlaybackStateDidChangeNotification:(id)a0;
- (void)_handleDisconnectedWithError:(struct __CFError { } *)a0;
- (void)_beginObservingTextEditingEvents;
- (void)_unpairExternalDevice;
- (BOOL)_isExternalDeviceConnected;
- (void)_disconnectExternalDevice;
- (void)_didReceiveTextEditingCallbackWithSession:(void *)a0 eventType:(unsigned int)a1;
- (void)_didGetTextEditingSession:(void *)a0 error:(struct __CFError { } *)a1;
- (void)_handleDidBeginEditingWithSession:(void *)a0;
- (void)_handleDidEndEditing;
- (id)_nowPlayingInfoWithNowPlayingMetadata:(id)a0;
- (id)_artworkDataWithArtwork:(void *)a0;
- (void)_updateNowPlayingInfo:(id)a0 withPlaybackState:(unsigned int)a1;

@end
