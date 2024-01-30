@class NSString, TUHandle, TUConversationParticipantCapabilities;

@interface TUMutableConversationParticipant : TUConversationParticipant

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isMuted) BOOL muted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isMomentsAvailable) BOOL momentsAvailable;
@property (nonatomic) long long streamToken;
@property (nonatomic) long long screenToken;
@property (nonatomic) long long audioPriority;
@property (nonatomic) long long videoPriority;
@property (copy, nonatomic) NSString *avcIdentifier;
@property (copy, nonatomic) NSString *activeIDSDestination;
@property (copy, nonatomic) TUConversationParticipantCapabilities *capabilities;
@property (nonatomic, getter=isLightweight) BOOL lightweight;
@property (nonatomic, getter=isRemoteAudioEnabled) BOOL remoteAudioEnabled;
@property (nonatomic, getter=isRemoteVideoEnabled) BOOL remoteVideoEnabled;


@end
