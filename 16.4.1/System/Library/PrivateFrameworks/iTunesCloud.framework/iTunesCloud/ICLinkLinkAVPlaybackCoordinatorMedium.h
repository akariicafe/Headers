@class NSString, AVPlayerPlaybackCoordinator;

@interface ICLinkLinkAVPlaybackCoordinatorMedium : ICLiveLinkPlaybackCoordinatorMedium <AVPlaybackCoordinationMediumDelegate>

@property (readonly, nonatomic) AVPlayerPlaybackCoordinator *playbackCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleNewTransportControlStateDictionary:(id)a0;
- (void)handleNewParticipantStateDictionary:(id)a0;
- (void)removeParticipant:(id)a0;
- (void).cxx_destruct;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)a0;
- (void)playbackCoordinator:(id)a0 broadcastLocalParticipantStateDictionary:(id)a1;
- (void)playbackCoordinator:(id)a0 broadcastTransportControlStateDictionary:(id)a1 forItemWithIdentifier:(id)a2;
- (void)playbackCoordinator:(id)a0 reloadTransportControlStateForItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearCoordinationMediumDelegate;
- (void)_playbackCoordinatorDidIssueCommandToPlaybackObjectNotification:(id)a0;
- (id)initWithPlaybackCoordinator:(id)a0 liveLink:(id)a1;
- (BOOL)isCoordinatorSuspended;

@end
