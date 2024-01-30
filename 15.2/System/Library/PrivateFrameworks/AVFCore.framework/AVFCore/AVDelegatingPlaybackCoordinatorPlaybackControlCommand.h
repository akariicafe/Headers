@class AVCoordinatedPlaybackParticipant, NSString;

@interface AVDelegatingPlaybackCoordinatorPlaybackControlCommand : NSObject

@property (readonly, nonatomic) AVCoordinatedPlaybackParticipant *originator;
@property (readonly, nonatomic) NSString *expectedCurrentItemIdentifier;

- (id)initInternal;
- (id)init;

@end
