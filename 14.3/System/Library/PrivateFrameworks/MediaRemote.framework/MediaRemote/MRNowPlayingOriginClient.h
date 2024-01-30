@class NSObject, NSArray, NSMutableArray, MRClient, MRDeviceInfo, MROrigin, MRApplicationActivity;
@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _canBeNowPlayingApp;
    double _canBeNowPlayingAppTimestamp;
    BOOL _isOverrideApp;
    unsigned int _routeDiscoveryMode;
    NSMutableArray *_applicationPickedRoutes;
    unsigned int _inputMode;
    float _volume;
    unsigned int _volumeCapabilities;
    MRApplicationActivity *_activity;
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
@property (nonatomic) BOOL canBeNowPlayingApp;
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

- (void)removeClient:(id)a0;
- (void)_registerMediaServerNotifications;
- (void).cxx_destruct;
- (id)existingNowPlayingClientForPlayerPath:(id)a0;
- (void)dealloc;
- (void)_unregisterMediaServerNotifications;
- (void)restoreNowPlayingClientState;
- (id)description;
- (void)_avSessionMediaServicesResetNotification:(id)a0;
- (id)nowPlayingClientForPlayerPath:(id)a0;
- (id)debugDescription;
- (id)initWithOrigin:(id)a0;

@end
