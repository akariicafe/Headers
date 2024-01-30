@class NSUUID, NSSet, NSString, NSDate, CXHandle;

@interface CXJoinCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *groupUUID;
@property (copy, nonatomic) NSDate *dateStarted;
@property (copy, nonatomic) NSSet *remoteMembers;
@property (copy, nonatomic) CXHandle *callerID;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic) BOOL wantsStagingArea;
@property (nonatomic, getter=isUpgrade) BOOL upgrade;
@property (copy, nonatomic) NSUUID *upgradeSessionUUID;
@property (copy, nonatomic) NSUUID *messagesGroupUUID;
@property (copy, nonatomic) NSString *messagesGroupName;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void).cxx_destruct;
- (void)fulfill;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)sanitizedCopyWithZone:(struct _NSZone { } *)a0;
- (void)fulfillWithDateStarted:(id)a0;
- (void)updateAsFulfilledWithDateStarted:(id)a0;
- (id)initWithCallUUID:(id)a0 groupUUID:(id)a1;

@end
