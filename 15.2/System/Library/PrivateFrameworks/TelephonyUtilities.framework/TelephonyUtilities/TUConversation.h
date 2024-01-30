@class NSUUID, NSString, TUConversationMember, TUConversationProvider, NSSet, TUConversationReport, TUHandle, NSObject, TUConversationLink;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (retain, nonatomic) TUConversationLink *link;
@property (nonatomic) long long state;
@property (nonatomic) long long letMeInRequestState;
@property (nonatomic) BOOL hasReceivedLetMeInRequest;
@property (nonatomic) long long avcSessionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (nonatomic, getter=hasJoined) BOOL hasJoined;
@property (nonatomic) BOOL isAnyOtherAccountDeviceActive;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic, getter=isPendingConversation) BOOL pendingConversation;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (nonatomic) unsigned long long localParticipantIdentifier;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *pendingMembers;
@property (copy, nonatomic) NSSet *kickedMembers;
@property (copy, nonatomic) NSSet *rejectedMembers;
@property (copy, nonatomic) NSSet *lightweightMembers;
@property (copy, nonatomic) NSSet *otherInvitedHandles;
@property (nonatomic) BOOL ignoreLMIRequests;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (copy, nonatomic) NSSet *activeLightweightParticipants;
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
@property (nonatomic, getter=isFromStorage) BOOL fromStorage;
@property (retain, nonatomic) NSUUID *selectiveSharingSessionUUID;
@property (readonly, nonatomic) unsigned long long avMode;
@property (readonly, nonatomic) TUConversationProvider *provider;

+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)a0;

- (id)displayName;
- (id)handles;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (unsigned long long)hash;
- (id)initWithConversation:(id)a0;
- (id)initWithUUID:(id)a0 groupUUID:(id)a1;
- (id)initWithUUID:(id)a0 groupUUID:(id)a1 provider:(id)a2;
- (id)joinedActivitySession;
- (BOOL)shouldShowInvitationOfStyles:(long long)a0 forHandle:(id)a1 defaultValue:(BOOL)a2;
- (BOOL)isEqualToConversation:(id)a0;
- (id)messagesGroupPhotoData;
- (BOOL)hasJoinedActivitySession;
- (BOOL)isRepresentedByRemoteMembers:(id)a0 andLink:(id)a1;
- (id)remoteParticipantForLightweightParticipantHandle:(id)a0;
- (BOOL)shouldShowInvitationUserNotificationForHandle:(id)a0;
- (BOOL)shouldShowInvitationRingingUIForHandle:(id)a0;
- (id)contactNamesByHandleWithContactsDataSource:(id)a0;

@end
