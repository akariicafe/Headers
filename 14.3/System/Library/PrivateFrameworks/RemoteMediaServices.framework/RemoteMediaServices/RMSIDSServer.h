@class NSString, NSMutableDictionary, RMSSessionManager, IDSService;

@interface RMSIDSServer : NSObject <IDSServiceDelegate, RMSSessionManagerDelegate, RMSDiscoverySessionDelegate, RMSPairingSessionDelegate, RMSControlSessionDelegate> {
    RMSSessionManager *_sessionManager;
    NSMutableDictionary *_nowPlayingSessions;
    NSMutableDictionary *_pairingSessions;
    NSMutableDictionary *_touchRemoteSessions;
    IDSService *_idsService;
    NSMutableDictionary *_pairingCompletionHandlers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)server;

- (id)init;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)_handleSetVolume:(id)a0;
- (void)_handlePickAudioRoute:(id)a0;
- (void)discoverySessionDidUpdateAvailableServices:(id)a0;
- (void)discoverySessionNetworkAvailabilityDidChange:(id)a0;
- (void)pairingSessionDidFail:(id)a0;
- (void)pairingSession:(id)a0 didPairWithServiceNetworkName:(id)a1 pairingGUID:(id)a2;
- (void)_handleSessionHeartbeat:(id)a0;
- (void)_handleBeginDiscovery:(id)a0;
- (void)_handleEndDiscovery:(id)a0;
- (void)_handleUnpairService:(id)a0;
- (void)_handleConnectToService:(id)a0;
- (void)_handleLogout:(id)a0;
- (void)_handlePlaybackCommand:(id)a0;
- (void)_handleTouchMove:(id)a0;
- (void)_handleTouchEnd:(id)a0;
- (void)_handleNavigationCommand:(id)a0;
- (void)_handleBeginObservingNowPlaying:(id)a0;
- (void)_handleEndObservingNowPlaying:(id)a0;
- (void)_handleNowPlayingArtworkRequest:(id)a0;
- (void)_handleBeginPairing:(id)a0;
- (void)_handleEndPairing:(id)a0;
- (void)_handleSetLikeState:(id)a0;
- (void)_handleAddToWishlist:(id)a0;
- (void)_handleSeekToPlaybackTime:(id)a0;
- (void)_handleUpdatePairedNetworkNames:(id)a0;
- (void)_handleSendText:(id)a0;
- (void)_handlePairingChallengeResponse:(id)a0;
- (void)_cleanupStaleSessions:(id)a0;
- (void)_sendData:(id)a0 type:(unsigned short)a1 priority:(long long)a2 timeout:(int)a3 queueOneID:(id)a4 inResponseTo:(id)a5;
- (void)_sendData:(id)a0 type:(unsigned short)a1 timeout:(int)a2 queueOneID:(id)a3 inResponseTo:(id)a4;
- (void)sessionManager:(id)a0 sessionDidTimeout:(id)a1 withIdentifier:(int)a2;
- (void)controlSession:(id)a0 didReceivePairingChallengeRequestWithCredentials:(id)a1 completionHandler:(id /* block */)a2;
- (void)controlSession:(id)a0 didUpdateNowPlayingInfo:(id)a1;
- (void)controlSession:(id)a0 artworkDataDidBecomeAvailable:(id)a1 identifier:(id)a2;
- (void)controlSession:(id)a0 didUpdateAudioRoutes:(id)a1;
- (void)controlSession:(id)a0 didUpdateVolume:(float)a1;
- (void)controlSessionDidBeginEditingText:(id)a0;
- (void)controlSessionDidEndEditingText:(id)a0;
- (void)controlSessionDidEnd:(id)a0;

@end
