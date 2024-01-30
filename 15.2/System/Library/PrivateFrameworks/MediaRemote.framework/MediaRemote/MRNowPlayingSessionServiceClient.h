@class NSMutableDictionary;

@interface MRNowPlayingSessionServiceClient : NSObject {
    NSMutableDictionary *_playerPathsByOrigin;
}

- (id)initWithService:(id)a0;
- (void)_handleCreatePlayerForOrigin:(id)a0 deviceInfo:(id)a1 completion:(id /* block */)a2;
- (id)_generatePlayerID;
- (id)_existingPlayerPathForOrigin:(id)a0;
- (void).cxx_destruct;
- (id)_generatePlayerPathForOrigin:(id)a0;
- (void)avSessionMediaServicesResetNotification:(id)a0;
- (void)_handleDestroyPlayersForOrigin:(id)a0;

@end
