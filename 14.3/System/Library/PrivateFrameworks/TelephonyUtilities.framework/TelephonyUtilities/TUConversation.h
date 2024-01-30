@class TUHandle, NSString, NSSet, TUContactsDataProvider, TUConversationMember, NSUUID, NSObject;

@interface TUConversation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUContactsDataProvider *contactsDataProvider;
@property (nonatomic) long long state;
@property (nonatomic) long long avcSessionToken;
@property (copy, nonatomic) NSString *avcSessionIdentifier;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isLocallyCreated) BOOL locallyCreated;
@property (nonatomic, getter=hasJoined) BOOL hasJoined;
@property (retain, nonatomic) TUConversationMember *localMember;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (retain, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSSet *participantHandles;
@property (copy, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) TUHandle *initiator;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) long long maxVideoDecodesAllowed;
@property (retain, nonatomic) NSObject *reportingHierarchyToken;
@property (retain, nonatomic) NSObject *reportingHierarchySubToken;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *groupUUID;

+ (id)numberFormatter;
+ (id)emptyConversationWithGroupUUID:(id)a0;

- (id)handles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithUUID:(id)a0 groupUUID:(id)a1;
- (BOOL)isEqualToConversation:(id)a0;
- (id)initiatorLocalizedName;
- (BOOL)isRepresentedByRemoteMembers:(id)a0;
- (id)contactNamesByHandleWithContactsDataSource:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;

@end
