@class NSString, NSArray, MRApplicationActivity, NSObject, NSMutableArray, MRClient, MRDeviceInfo, MROrigin;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
    NSString *_routingContextID;
    MRDeviceInfo *_deviceInfo;
    id /* block */ _playbackQueueCallback;
    id /* block */ _playbackQueueTransactionCallback;
    id /* block */ _capabilitiesCallback;
    id /* block */ _commandCallback;
    id /* block */ _beginLyricsEventCallback;
    id /* block */ _endLyricsEventCallback;
    id /* block */ _playbackSessionCallback;
    id /* block */ _playbackSessionMigrateBeginCallback;
    id /* block */ _playbackSessionMigrateEndCallback;
    id /* block */ _playbackSessionMigrateRequestCallback;
    id /* block */ _clientMessageCallback;
    NSMutableArray *_nowPlayingClients;
}

@property (readonly, nonatomic) MROrigin *origin;
@property (nonatomic) BOOL isOverrideApp;
@property (nonatomic) unsigned int hardwareRemoteBehavior;
@property (nonatomic) unsigned int routeDiscoveryMode;
@property (copy, nonatomic) NSArray *applicationPickedRoutes;
@property (nonatomic) unsigned int inputMode;
@property (nonatomic) unsigned int volumeCapabilities;
@property (nonatomic) float volume;
@property (retain, nonatomic) MRApplicationActivity *activity;
@property (retain, nonatomic) MRDeviceInfo *deviceInfo;
@property (copy, nonatomic) id /* block */ playbackQueueCallback;
@property (copy, nonatomic) id /* block */ playbackQueueTransactionCallback;
@property (copy, nonatomic) id /* block */ commandCallback;
@property (copy, nonatomic) id /* block */ playbackSessionCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) id /* block */ beginLyricsEventCallback;
@property (copy, nonatomic) id /* block */ endLyricsEventCallback;
@property (copy, nonatomic) id /* block */ clientMessageCallback;
@property (retain, nonatomic) MRClient *activeNowPlayingClient;
@property (readonly, nonatomic) NSArray *nowPlayingClients;

- (id)initWithOrigin:(id)a0;
- (void)removeAllClients;
- (id)existingNowPlayingClientForPlayerPath:(id)a0;
- (void)_handleDeviceInfoDidChangeNotification:(id)a0;
- (void)removeClient:(id)a0;
- (void)restoreNowPlayingClientState;
- (void)_restoreNowPlayingClientState;
- (id)nowPlayingClientForPlayerPath:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)_prepareToRestoreClientStateWithCompletion:(id /* block */)a0;
- (id)debugDescription;

@end
