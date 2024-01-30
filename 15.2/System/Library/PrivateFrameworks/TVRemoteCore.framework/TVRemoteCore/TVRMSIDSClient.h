@class NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue;

@interface TVRMSIDSClient : NSObject <IDSServiceDelegate> {
    NSMutableDictionary *_messageRecords;
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
}

@property (nonatomic, getter=isCompanionAvailable) BOOL companionAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedClient;

- (void)service:(id)a0 devicesChanged:(id)a1;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)init;
- (void)_handleSessionDidEnd:(id)a0;
- (void)beginDiscoverySessionWithDiscoveryTypes:(int)a0 pairedNetworkNames:(id)a1 completionHandler:(id /* block */)a2;
- (void)updatePairedNetworkNames:(id)a0 sessionIdentifier:(int)a1;
- (void)endDiscoverySession:(int)a0;
- (void)sendHeartbeatWithSessionIdentifier:(int)a0 completionHandler:(id /* block */)a1;
- (void)_handleAvailableServicesDidUpdate:(id)a0;
- (void)_handleNowPlayingInfoDidUpdate:(id)a0;
- (void)_handleNowPlayingArtworkAvailable:(id)a0;
- (void)_handleAudioRoutesDidUpdate:(id)a0;
- (void)_handleVolumeDidUpdate:(id)a0;
- (void)_handlePairingDidSucceed:(id)a0;
- (void)_handlePairingDidFail:(id)a0;
- (void)_handleWifiAvailabilityDidChange:(id)a0;
- (void)_handleBeginDiscoverySessionResponse:(id)a0;
- (void)_handleConnectToServiceResponse:(id)a0;
- (void)_handleNowPlayingArtworkDataResponse:(id)a0;
- (void)_handleBeginPairingSessionResponse:(id)a0;
- (void)_handleHeartbeatResponse:(id)a0;
- (void)_handlePickAudioRouteResponse:(id)a0;
- (void)_handleSetLikedStateResponse:(id)a0;
- (void)_handleBeginObservingNowPlayingResponse:(id)a0;
- (void)_updateCompanionAvailability;
- (void)_sendMessage:(id)a0 type:(unsigned short)a1 timeout:(int)a2 queueOneID:(id)a3 priority:(long long)a4 responseBlock:(id)a5;
- (void)_invokeBeginDiscoveryResponseBlock:(id)a0 success:(BOOL)a1 session:(int)a2;
- (void)_handleResponseCodeMessage:(id)a0;
- (void)_invokeArtworkDataResponseBlock:(id)a0 artworkData:(id)a1;
- (void)_invokeBeginPairingResponseBlock:(id)a0 responseCode:(long long)a1 session:(int)a2;
- (void)endPairingSession:(int)a0;
- (void)_invokeResponseCodeResponseBlock:(id)a0 responseCode:(long long)a1;
- (void)_handleTimeoutForMessageWithIdentifier:(id)a0;
- (BOOL)_isCompanionAvailable;
- (void)logoutWithSessionIdentifier:(int)a0;
- (void)sendPlaybackCommand:(long long)a0 sessionIdentifier:(int)a1;
- (void)setVolume:(float)a0 sessionIdentifier:(int)a1;
- (void)pickAudioRouteWithMacAddress:(unsigned long long)a0 sessionIdentifier:(int)a1 completionHandler:(id /* block */)a2;
- (void)seekToPlaybackTime:(int)a0 sessionIdentifier:(int)a1;
- (void)setLikedState:(long long)a0 itemID:(unsigned long long)a1 databaseID:(unsigned long long)a2 sessionIdentifier:(int)a3 completionHandler:(id /* block */)a4;
- (void)addToWishlist:(unsigned long long)a0 databaseID:(unsigned long long)a1 sessionIdentifier:(int)a2 completionHandler:(id /* block */)a3;
- (void)_handleAddToWishlistResponse:(id)a0;
- (void)beginObservingNowPlayingWithSessionIdentifier:(int)a0 completionHandler:(id /* block */)a1;
- (void)endObservingNowPlayingWithSessionIdentifier:(int)a0;
- (void)requestArtworkDataForNowPlayingInfo:(id)a0 width:(unsigned int)a1 height:(unsigned int)a2 compressionQuality:(float)a3 completionHandler:(id /* block */)a4;
- (void)sendTouchMoveWithDirection:(long long)a0 repeatCount:(unsigned int)a1 sessionIdentifier:(int)a2;
- (void)sendTouchEndWithDirection:(long long)a0 repeatCount:(unsigned int)a1 sessionIdentifier:(int)a2;
- (void)sendNavigationCommand:(long long)a0 sessionIdentifier:(int)a1;
- (void)beginPairingSessionWithPasscode:(id)a0 appName:(id)a1 deviceName:(id)a2 deviceModel:(id)a3 completionHandler:(id /* block */)a4;
- (void)connectToService:(id)a0 pairingGUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)_invokeConnectToServiceResponseBlock:(id)a0 responseCode:(long long)a1 controlInterface:(id)a2 session:(int)a3;

@end
