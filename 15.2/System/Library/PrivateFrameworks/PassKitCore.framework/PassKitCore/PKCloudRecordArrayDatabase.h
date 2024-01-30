@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (id)allItems;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allObjects;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (id)countByZoneID;
- (void)addCloudRecord:(id)a0;
- (void)applyCloudRecordDatabase:(id)a0;
- (id)description;
- (id)allRecordsWithRecordType:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)count;
- (id)allRecordNames;
- (id)allRecordIDs;

@end
