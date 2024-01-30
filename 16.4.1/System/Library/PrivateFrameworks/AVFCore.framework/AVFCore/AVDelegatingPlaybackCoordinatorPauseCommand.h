@class AVCoordinatedPlaybackParticipant, NSString, AVDelegatingPlaybackCoordinator;

@interface AVDelegatingPlaybackCoordinatorPauseCommand : AVDelegatingPlaybackCoordinatorPlaybackControlCommand {
    AVDelegatingPlaybackCoordinator *_coordinator;
    AVCoordinatedPlaybackParticipant *_originator;
    NSString *_expectedCurrentItemIdentifier;
    long long _commandOrderIndex;
}

@property (readonly, nonatomic) BOOL shouldBufferInAnticipationOfPlayback;
@property (readonly, nonatomic) float anticipatedPlaybackRate;

- (id)originator;
- (void)dealloc;
- (id)init;
- (id)expectedCurrentItemIdentifier;
- (id)initWithCoordinator:(id)a0 originator:(id)a1 expectedCurrentItemIdentifier:(id)a2 commandOrderIndex:(long long)a3 shouldBufferInAnticipationOfPlayback:(BOOL)a4 anticipatedPlaybackRate:(float)a5;

@end
