@class ANVolumeController, ANAnnouncementCoordinationService, ANAnnouncementStatePublisher, NSString, NSMutableDictionary, NSMutableSet, NSObject, NSXPCListener, NSMutableOrderedSet, ANTrackPlayer;
@protocol OS_dispatch_queue;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, ANAnnouncementManagerDelegte, NSXPCListenerDelegate, ANTrackPlayerDelegate, ANAnnouncementCoordinationServiceDelegate>

@property (readonly, nonatomic) NSXPCListener *localPlaybackSessionListener;
@property (readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener;
@property (readonly, nonatomic) BOOL isLocalPlaybackSessionActive;
@property (readonly, nonatomic) BOOL remoteSessionsActive;
@property (retain, nonatomic) NSMutableDictionary *recentPlaybackInfo;
@property (retain) NSMutableSet *remotePlaybackClients;
@property (retain) NSMutableSet *localPlaybackClients;
@property (retain, nonatomic) ANTrackPlayer *audioPlayer;
@property (retain, nonatomic) ANVolumeController *volumeController;
@property (retain, nonatomic) NSMutableOrderedSet *announcementsToPlay;
@property (nonatomic) long long lastAnnoucementIndex;
@property (retain, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher;
@property (copy, nonatomic) id /* block */ localPlaybackCompletionHandler;
@property (readonly, nonatomic) unsigned long long playbackOptions;
@property (retain, nonatomic) ANAnnouncementCoordinationService *coordinationService;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endSessionWithReply:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_removeConnection:(id)a0;
- (void)setPlaybackStoppedForAnnouncement:(id)a0;
- (void)setPlaybackStartedForAnnouncement:(id)a0;
- (void)cleanForExit;
- (void)lastPlayedAnnouncementInfo:(id /* block */)a0;
- (void)playbackState:(id /* block */)a0;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)playAnnouncementsWithOptions:(unsigned long long)a0 startingAt:(id)a1 completionHandler:(id /* block */)a2;
- (void)playAnnouncementsWithIDs:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(id /* block */)a0;
- (void)nextAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)previousAnnouncementWithCompletionHandler:(id /* block */)a0;
- (void)startSessionForGroupID:(id)a0 reply:(id /* block */)a1;
- (void)announcementsDidChangeForGroupID:(id)a0;
- (BOOL)_endSessionForConnection:(id)a0;
- (id)_clientForConnection:(id)a0;
- (void)_setTimersActive:(BOOL)a0;
- (void)_updatePlaybackInfoForAnnouncementID:(id)a0 options:(unsigned long long)a1;
- (void)playAnnouncementsWithIDs:(id)a0 announceIDToStart:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_playAnnouncementsWithIDs:(id)a0 announceIDToStart:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)_stopAudioPlayer;
- (void)_handlePlaybackEndedWithError:(id)a0;
- (id)_announcementsForPlaybackOptions:(unsigned long long)a0 fromAnnouncements:(id)a1;
- (void)_startPlayingAnnouncementsWithOptions:(unsigned long long)a0 fromSource:(id)a1;
- (id)_nextAnnouncementToPlay;
- (void)_setVolume:(unsigned long long)a0;
- (id)_createTrackPlayerWithPlaybackDeadline:(id)a0 options:(unsigned long long)a1 adjustedAnchorPoint:(double *)a2;
- (void)_updatePlayerState;
- (void)trackDidFinishPlaying:(id)a0 trackType:(long long)a1 withError:(id)a2;
- (void)audioSessionInterruptionActive:(BOOL)a0;
- (void)didPlayAnnouncement:(id)a0;

@end
