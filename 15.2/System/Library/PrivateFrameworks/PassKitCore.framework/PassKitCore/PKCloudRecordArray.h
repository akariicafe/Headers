@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;

- (id)allItems;
- (void)encodeWithCoder:(id)a0;
- (id)allObjects;
- (id)description;
- (id)descriptionWithItem:(BOOL)a0;
- (id)allRecordsWithRecordType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (long long)count;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (id)allRecordNames;
- (id)allRecordIDs;
- (void)applyCloudRecordArray:(id)a0;
- (id)allObjectsByDatabaseIdentifier;

@end
