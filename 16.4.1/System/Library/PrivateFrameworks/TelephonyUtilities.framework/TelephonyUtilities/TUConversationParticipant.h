@class TUHandle, NSString, TUConversationParticipantAssociation, TUConversationParticipantCapabilities;

@interface TUConversationParticipant : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic, getter=isLightweight) BOOL lightweight;
@property (nonatomic, getter=isLocalAccountHandle) BOOL localAccountHandle;
@property (nonatomic, getter=isGuestModeEnabled) BOOL guestModeEnabled;
@property (nonatomic) unsigned long long audioVideoMode;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long captionsToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled;
@property (copy, nonatomic) TUConversationParticipantAssociation *association;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *senderCorrelationIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConversationParticipant:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1;
- (id)initWithIdentifier:(unsigned long long)a0 handle:(id)a1 senderCorrelationIdentifier:(id)a2;
- (BOOL)isEqualToParticipant:(id)a0;

@end
