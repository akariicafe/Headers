@class NSObject, SBCPlaybackPositionDomain, SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue;

@interface MPUbiquitousPlaybackPositionController : NSObject

@property (class, readonly, nonatomic) MPUbiquitousPlaybackPositionController *sharedUbiquitousPlaybackPositionController;

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) SBCPlaybackPositionSyncService *uppServiceProxy;
@property (retain, nonatomic) SBCPlaybackPositionDomain *uppDomain;
@property (nonatomic, getter=isServiceActive) BOOL serviceActive;
@property (nonatomic, getter=isServiceActive) BOOL beganUsingPlaybackPositionMetadata;
@property (nonatomic) BOOL databaseHasBookmarkableContents;
@property (readonly, nonatomic) BOOL applicationBecomingActive;
@property (nonatomic) BOOL externallyActive;

- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)beginUsingPlaybackPositionMetadata;
- (void)_applicationDidEnterForegroundNotification:(id)a0;
- (void)_defaultMediaLibraryDidChangeNotification:(id)a0;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)a0 isCheckpoint:(BOOL)a1;
- (BOOL)_onQueue_shouldBeActive;
- (id)playbackPositionForLocalEntityIdentifier:(id)a0;
- (id)playbackPositionForLocalEntityIdentifiers:(id)a0;
- (BOOL)_onQueue_isEnabled;
- (void)persistPlaybackPositionMetadataEntity:(id)a0 isCheckpoint:(BOOL)a1 completion:(id /* block */)a2;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)a0;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_becomeActiveService;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (void)dealloc;

@end
