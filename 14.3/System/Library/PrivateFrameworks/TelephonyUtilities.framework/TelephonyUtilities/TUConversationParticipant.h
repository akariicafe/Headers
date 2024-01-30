@class NSString, TUHandle;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) TUHandle *handle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToParticipant:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
