@class NSUUID, NSString, NSURL, TUConversationProvider, NSSet, TUConversationActivity, NSDictionary, TUHandle, TUConversationLink;

@interface TUJoinConversationRequest : NSObject <TUFilteredRequest, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TUHandle *callerID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (nonatomic) BOOL showUIPrompt;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic) BOOL sendLetMeInRequest;
@property (nonatomic, getter=isJoiningConversationWithLink) BOOL joiningConversationWithLink;
@property (copy, nonatomic) NSSet *invitationPreferences;
@property (readonly, copy, nonatomic) NSDictionary *notificationStylesByHandleType;
@property (readonly, copy, nonatomic) NSSet *remoteMembers;
@property (readonly, copy, nonatomic) NSSet *otherInvitedHandles;
@property (copy, nonatomic) NSString *audioSourceIdentifier;
@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL wantsStagingArea;
@property (copy, nonatomic) TUConversationLink *conversationLink;
@property (nonatomic) TUConversationActivity *activity;
@property (readonly, nonatomic) NSURL *URL;
@property (retain, nonatomic) TUConversationProvider *provider;
@property (nonatomic) int originatingUIType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sanitizedMembersFromMembers:(id)a0;
+ (id)remoteMembersFromURLComponents:(id)a0;
+ (id)otherInvitedHandlesFromURLComponents:(id)a0;
+ (id)conversationLinkFromURLComponents:(id)a0;
+ (BOOL)joiningConversationWithLinkFromURLComponents:(id)a0;
+ (id)invitationPreferencesFromURLComponents:(id)a0;
+ (id)callerIDFromURLComponents:(id)a0;
+ (BOOL)videoEnabledFromURLComponents:(id)a0;
+ (BOOL)shouldSuppressInCallUIFromURLComponents:(id)a0;
+ (BOOL)wantsStagingAreaFromURLComponents:(id)a0;
+ (id)messagesGroupUUIDFromURLComponents:(id)a0;
+ (id)messagesGroupNameFromURLComponents:(id)a0;
+ (BOOL)showUIPromptFromURLComponents:(id)a0;
+ (BOOL)videoFromURLComponents:(id)a0;
+ (id)providerFromURLComponents:(id)a0;
+ (id)audioSourceIdentifierFromURLComponents:(id)a0;
+ (BOOL)sendLetMeInRequestFromURLComponents:(id)a0;

- (id)handles;
- (id)queryItems;
- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)bundleIdentifier;
- (id)initWithConversation:(id)a0;
- (id)contactNamesByHandleWithContactsDataSource:(id)a0;
- (id)initWithRemoteMembers:(id)a0 otherInvitedHandles:(id)a1;
- (id)initWithConversationLink:(id)a0 otherInvitedHandles:(id)a1 remoteMembers:(id)a2 sendLetMeInRequest:(BOOL)a3;
- (id)initWithRemoteMembers:(id)a0;
- (id)conversationMembersForIntent:(id)a0;
- (id)remoteMembersQueryItem;
- (id)otherInvitedHandlesQueryItem;
- (id)callerIDQueryItem;
- (id)videoEnabledQueryItem;
- (id)shouldSuppressInCallUIQueryItem;
- (id)wantsStagingAreaQueryItem;
- (id)messagesGroupUUIDQueryItem;
- (id)messagesGroupNameQueryItem;
- (id)showUIPromptQueryItem;
- (id)sendLetMeInRequestQueryItem;
- (id)joiningConversationWithLinkQueryItem;
- (id)invitationPreferencesQueryItem;
- (id)videoQueryItem;
- (id)providerQueryItem;
- (id)audioSourceIdentifierQueryItem;
- (id)conversationLinkQueryItem;
- (id)initWithConversationLink:(id)a0 otherInvitedHandles:(id)a1 sendLetMeInRequest:(BOOL)a2;
- (id)initWithGroupUUID:(id)a0 localParticipantHandle:(id)a1 remoteParticipantHandles:(id)a2;
- (id)userActivityUsingStartCallIntents;

@end
