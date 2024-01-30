@class NSMutableDictionary;

@interface MRNowPlayingSessionServiceClient : NSObject {
    NSMutableDictionary *_playerPathsByOrigin;
}

- (id)initWithService:(id)a0;
- (id)_generatePlayerPathForOrigin:(id)a0;
- (void)mediaServicesResetNotification:(id)a0;
- (void)_handleDestroyPlayersForOrigin:(id)a0;
- (id)_generatePlayerID;
- (void)_handleCreatePlayerForOrigin:(id)a0 deviceInfo:(id)a1 completion:(id /* block */)a2;
- (id)_existingPlayerPathForOrigin:(id)a0;
- (void).cxx_destruct;

@end
