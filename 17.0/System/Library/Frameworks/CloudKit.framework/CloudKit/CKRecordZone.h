@class NSData, NSString, NSArray, NSDate, CKServerChangeToken, CKReference, CKRoughlyEquivalentProperties, CKContainerID, CKRecordZoneID, NSNumber;

@interface CKRecordZone : NSObject <CKPropertiesDescription, CKContainerAssignment, CKRoughlyEquivalent, NSSecureCoding, NSCopying> {
    CKContainerID *_containerID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSDate *expirationDate;
@property (getter=isExpired) BOOL expired;
@property BOOL hasUpdatedExpirationTimeInterval;
@property (copy) NSNumber *updatedExpirationTimeInterval;
@property (copy) CKReference *share;
@property int deviceCount;
@property (copy) CKServerChangeToken *currentServerChangeToken;
@property (copy) NSData *clientChangeToken;
@property (copy) NSData *protectionData;
@property (copy) NSString *protectionEtag;
@property (copy) NSData *zoneishProtectionData;
@property (copy) NSData *pcsKeyID;
@property (copy) NSData *zoneishKeyID;
@property BOOL needsZoneishPCSRolled;
@property BOOL zoneKeyRollAllowed;
@property (copy) NSString *zonePCSLastModifierDevice;
@property (copy) NSString *previousProtectionEtag;
@property long long assetQuotaUsage;
@property long long metadataQuotaUsage;
@property (copy) NSDate *zonePCSModificationDate;
@property BOOL serializeProtectionData;
@property (copy) NSArray *invitedKeysToRemove;
@property (copy) CKRecordZoneID *zoneID;
@property unsigned long long capabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CKRoughlyEquivalentProperties *equivalencyProperties;

+ (void)initialize;
+ (id)systemRecordZone;
+ (id)defaultRecordZone;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithZoneName:(id)a0;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (void)CKAssignToContainerWithID:(id)a0;
- (void)setExpirationAfterTimeInterval:(id)a0;
- (void).cxx_destruct;
- (void)replaceZoneIDWith:(id)a0;
- (id)initWithZoneID:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
