@class NSString, NSMutableDictionary;

@interface PKCloudRecordArrayDatabase : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabaseZone;

- (id)allItems;
- (void).cxx_destruct;
- (id)countByZoneID;
- (id)descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (void)addCloudRecord:(id)a0;
- (void)applyCloudRecordDatabase:(id)a0;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)count;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;

@end
