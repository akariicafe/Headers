@class NSUUID, NSString, NSDate, NSData, NSSet, NSDictionary, CXHandle, CXJoinCallActivity;

@interface CXJoinCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSDate *dateStarted;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) NSSet *otherInvitedHandles;
@property (copy, nonatomic) CXHandle *callerID;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL wantsStagingArea;
@property (nonatomic, getter=isLetMeIn) BOOL letMeIn;
@property (nonatomic, getter=isJoiningConversationWithLink) BOOL joiningConversationWithLink;
@property (copy, nonatomic) NSString *pseudonym;
@property (copy, nonatomic) NSData *publicKey;
@property (nonatomic, getter=isVideo) BOOL video;
@property (nonatomic, getter=isUpgrade) BOOL upgrade;
@property (copy, nonatomic) NSUUID *upgradeSessionUUID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;
@property (copy, nonatomic) NSSet *remotePushTokens;
@property (copy, nonatomic) CXJoinCallActivity *joinCallActivity;
@property (nonatomic, getter=isRelay) BOOL relay;
@property (copy, nonatomic) NSString *conversationProviderIdentifier;
@property (copy, nonatomic) NSDictionary *notificationStylesByHandleType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)fulfill;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void)fulfillWithDateStarted:(id)a0;
- (void)updateAsFulfilledWithDateStarted:(id)a0;
- (id)initWithCallUUID:(id)a0 groupUUID:(id)a1;

@end
