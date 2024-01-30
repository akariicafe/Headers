@class NSSet, NSArray, NSString, NSDate, HKProfileIdentifier, HDCloudSyncCodableRegistry;

@interface HDCloudSyncRegistryRecord : HDCloudSyncRecord {
    HDCloudSyncCodableRegistry *_underlyingRegistry;
}

@property (retain, nonatomic) NSSet *disabledOwnerIdentifiers;
@property (readonly, copy, nonatomic) NSSet *ownerIdentifiers;
@property (readonly, copy, nonatomic) NSArray *childHeaderRecordIDs;
@property (nonatomic) BOOL deleted;
@property (copy, nonatomic) NSString *displayFirstName;
@property (copy, nonatomic) NSString *displayLastName;
@property (copy, nonatomic) NSDate *displayNameModificationDate;
@property (copy, nonatomic) HKProfileIdentifier *ownerProfileIdentifier;
@property (copy, nonatomic) HKProfileIdentifier *sharedProfileIdentifier;

+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (id)sharedProfileIdentifierForOwnerProfileIdentifier:(id)a0;
+ (BOOL)isRegistryRecord:(id)a0;
+ (BOOL)isRegistryRecordID:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)serializeUnderlyingMessage;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)initInZone:(id)a0 ownerProfileIdentifier:(id)a1;
- (id)storeIdentifiersForOwnerIdentifier:(id)a0;
- (void)addStoreIdentifier:(id)a0 ownerIdentifier:(id)a1;
- (id)initInZone:(id)a0 ownerProfileIdentifier:(id)a1 sharedProfileIdentifier:(id)a2;
- (id)_profileIdentifierWithCodableProfileIdentifier:(id)a0;
- (id)_codableProfileIdentifierWithProfileIdentifier:(id)a0;
- (void)removeStoreIdentifier:(id)a0 ownerIdentifier:(id)a1;

@end
