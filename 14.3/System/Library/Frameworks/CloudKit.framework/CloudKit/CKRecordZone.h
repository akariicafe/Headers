@class CKContainerID, NSData, NSArray, NSString, CKServerChangeToken, NSDate, CKReference, CKRecordZoneID;

@interface CKRecordZone : NSObject <CKContainerAssignment, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) CKContainerID *containerID;
@property (nonatomic) int deviceCount;
@property (retain, nonatomic) CKServerChangeToken *currentServerChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (retain, nonatomic) NSData *protectionData;
@property (retain, nonatomic) NSString *protectionEtag;
@property (retain, nonatomic) NSData *zoneishProtectionData;
@property (retain, nonatomic) NSData *pcsKeyID;
@property (retain, nonatomic) NSData *zoneishKeyID;
@property (retain, nonatomic) CKReference *share;
@property (nonatomic) BOOL needsZoneishPCSRolled;
@property (nonatomic) BOOL zoneKeyRollAllowed;
@property (retain, nonatomic) NSString *zonePCSLastModifierDevice;
@property (retain, nonatomic) NSString *previousProtectionEtag;
@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) long long metadataQuotaUsage;
@property (retain, nonatomic) NSDate *zonePCSModificationDate;
@property (nonatomic) BOOL serializeProtectionData;
@property (retain, nonatomic) NSArray *invitedKeysToRemove;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (nonatomic) unsigned long long capabilities;

+ (id)defaultRecordZone;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKPropertiesDescription;
- (id)initWithZoneID:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithZoneName:(id)a0;
- (id)_initZoneWithIdentifier:(id)a0 capabilities:(unsigned long long)a1;
- (void)CKAssignToContainerWithID:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
