@interface _TtCC15GroupActivities14PlaybackSyncer27AVCoordinatorDelegateBridge : NSObject <AVPlaybackCoordinationMediumDelegatePrivate, AVPlaybackCoordinationMediumDelegate> {
    void /* unknown type, empty encoding */ localParticipantID;
    void /* unknown type, empty encoding */ delegate;
}

- (void)playbackCoordinator:(id)a0 promptForLeaveOrEndSessionAllowingCancellation:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (id)localParticipantUUIDForPlaybackCoordinator:(id)a0;
- (void)playbackCoordinator:(id)a0 broadcastLocalParticipantStateDictionary:(id)a1;
- (void)playbackCoordinator:(id)a0 broadcastTransportControlStateDictionary:(id)a1 forItemWithIdentifier:(id)a2;
- (void)playbackCoordinator:(id)a0 reloadTransportControlStateForItemWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end
