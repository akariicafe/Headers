@class NSData, NSString, CKShareParticipant, NSArray, CKContainerID, CKRecordID, CKDeviceToDeviceShareInvitationToken, CKRecord, CKUserIdentity, CKShare, CKRecordZone;

@interface CKShareMetadata : NSObject <CKContainerAssignment, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKShareParticipant *callingParticipant;
@property (copy, nonatomic) NSArray *sharedItemHierarchyIDs;
@property (retain, nonatomic) NSString *rootRecordType;
@property (copy, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (copy, nonatomic) NSData *protectedFullToken;
@property (copy, nonatomic) NSData *publicToken;
@property (readonly, nonatomic, getter=baseToken) NSString *baseToken;
@property (copy, nonatomic) NSData *privateToken;
@property (retain, nonatomic) CKRecordZone *sharedZone;
@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantPermission;
@property (retain, nonatomic) NSArray *outOfNetworkMatches;
@property (copy, nonatomic) CKRecordID *hierarchicalRootRecordID;
@property (copy, nonatomic) CKRecord *rootRecord;
@property (nonatomic) BOOL acceptedInProcess;
@property (retain, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) CKUserIdentity *ownerIdentity;
@property (copy, nonatomic) CKShare *share;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) long long participantType;
@property (readonly, copy, nonatomic) CKRecordID *rootRecordID;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)environment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)ckShortDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)a0;
- (void)fillAnonymousCKUserID:(id)a0;

@end
