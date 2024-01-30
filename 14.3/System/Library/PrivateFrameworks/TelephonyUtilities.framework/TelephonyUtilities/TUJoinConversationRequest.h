@class TUHandle, NSUUID, NSString, NSSet, NSURL;

@interface TUJoinConversationRequest : NSObject <TUFilteredRequest, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TUHandle *callerID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) BOOL showUIPrompt;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (readonly, copy, nonatomic) NSSet *remoteMembers;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL wantsStagingArea;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sanitizedMembersFromMembers:(id)a0;
+ (id)remoteMembersFromURLComponents:(id)a0;
+ (id)callerIDFromURLComponents:(id)a0;
+ (BOOL)videoEnabledFromURLComponents:(id)a0;
+ (BOOL)shouldSuppressInCallUIFromURLComponents:(id)a0;
+ (BOOL)wantsStagingAreaFromURLComponents:(id)a0;
+ (id)messagesGroupUUIDFromURLComponents:(id)a0;
+ (id)messagesGroupNameFromURLComponents:(id)a0;
+ (BOOL)showUIPromptFromURLComponents:(id)a0;

- (id)queryItems;
- (id)handles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (id)initWithConversation:(id)a0;
- (id)contactNamesByHandleWithContactsDataSource:(id)a0;
- (id)initWithRemoteMembers:(id)a0;
- (id)remoteMembersQueryItem;
- (id)callerIDQueryItem;
- (id)videoEnabledQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)wantsStagingAreaQueryItem;
- (id)messagesGroupUUIDQueryItem;
- (id)messagesGroupNameQueryItem;
- (id)showUIPromptQueryItem;
- (id)initWithGroupUUID:(id)a0 localParticipantHandle:(id)a1 remoteParticipantHandles:(id)a2;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
