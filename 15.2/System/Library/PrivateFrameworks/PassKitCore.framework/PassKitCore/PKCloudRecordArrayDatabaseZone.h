@class NSString, NSMutableDictionary, CKRecordZoneID;

@interface PKCloudRecordArrayDatabaseZone : NSObject <NSSecureCoding> {
    CKRecordZoneID *_zoneID;
    NSString *_databaseIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByZoneRecord;

- (id)allItems;
- (void)encodeWithCoder:(id)a0;
- (id)allObjects;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0;
- (void)applyCloudRecordDatabaseZone:(id)a0;
- (id)initWithZoneID:(id)a0 databaseIdentifier:(id)a1;
- (id)description;
- (id)allRecordsWithRecordType:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)count;
- (id)allRecordNames;
- (id)allRecordIDs;

@end
