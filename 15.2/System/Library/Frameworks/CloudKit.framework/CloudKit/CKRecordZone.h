@class NSData, NSString, NSDate, NSArray, CKServerChangeToken, CKReference, CKContainerID, CKRecordZoneID;

@interface CKRecordZone : NSObject <CKPropertiesDescription, CKContainerAssignment, NSSecureCoding, NSCopying> {
    CKContainerID *_containerID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int deviceCount;
@property (retain, nonatomic) CKServerChangeToken *currentServerChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (retain, nonatomic) NSData *protectionData;
@property (retain, nonatomic) NSString *protectionEtag;
@property (retain, nonatomic) NSData *zoneishProtectionData;
@property (retain, nonatomic) NSData *pcsKeyID;
@property (retain, nonatomic) NSData *zoneishKeyID;
@property (copy, nonatomic) CKReference *share;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultRecordZone;
+ (id)systemRecordZone;

- (id)initWithZoneID:(id)a0;
- (id)initWithZoneName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (void)CKAssignToContainerWithID:(id)a0;

@end
