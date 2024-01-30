@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic) long long streamToken;

+ (BOOL)supportsSecureCoding;


@end
