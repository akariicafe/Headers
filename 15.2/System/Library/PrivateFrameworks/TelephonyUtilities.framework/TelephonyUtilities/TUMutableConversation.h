@class TUConversationMember, NSString, NSUUID, NSSet, TUConversationReport, TUHandle, NSObject, TUConversationLink;

@interface TUMutableConversation : TUConversation

@property (retain, nonatomic) TUConversationLink *link;
@property (nonatomic) long long state;
@property (nonatomic) long long letMeInRequestState;
@property (nonatomic) long long avcSessionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (nonatomic, getter=hasJoined) BOOL hasJoined;
@property (nonatomic, getter=isVideo) BOOL video;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *pendingMembers;
@property (copy, nonatomic) NSSet *rejectedMembers;
@property (copy, nonatomic) NSSet *lightweightMembers;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (copy, nonatomic) TUConversationReport *report;
@property (nonatomic, getter=isOneToOneModeEnabled) BOOL oneToOneModeEnabled;
@property (nonatomic, getter=isBackedByGroupSession) BOOL backedByGroupSession;
@property (copy, nonatomic) NSSet *activitySessions;
@property (copy, nonatomic) NSSet *virtualParticipants;
@property (copy, nonatomic) NSSet *invitationPreferences;


@end
