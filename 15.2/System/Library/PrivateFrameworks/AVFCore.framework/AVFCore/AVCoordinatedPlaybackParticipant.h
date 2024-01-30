@class NSArray, NSUUID;

@interface AVCoordinatedPlaybackParticipant : NSObject

@property (readonly, nonatomic) NSArray *suspensionReasons;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) NSUUID *identifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithParticipantIdentifier:(id)a0 readyToPlay:(BOOL)a1 suspensionReasons:(id)a2;

@end
