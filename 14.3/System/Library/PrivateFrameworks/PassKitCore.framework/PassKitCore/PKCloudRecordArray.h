@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *cloudRecordByDatabase;

- (id)allItems;
- (id)init;
- (void).cxx_destruct;
- (id)_descriptionWithDetailedOutput:(BOOL)a0 includeItem:(BOOL)a1;
- (id)allRecordNames;
- (id)allRecordsWithRecordType:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;
- (void)addCloudRecord:(id)a0 forContainerDatabaseIdentifier:(id)a1;
- (void)applyCloudRecordArray:(id)a0;
- (id)allObjectsByDatabaseIdentifier;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)count;
- (id)allObjects;
- (void)encodeWithCoder:(id)a0;

@end
