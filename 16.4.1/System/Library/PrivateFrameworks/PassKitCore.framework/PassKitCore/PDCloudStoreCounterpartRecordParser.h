@class NSSet, NSMutableDictionary;
@protocol PDCloudStoreCounterpartRecordParserDataSource;

@interface PDCloudStoreCounterpartRecordParser : NSObject {
    NSMutableDictionary *_itemTypeToParserIdentifiers;
    NSSet *_recordNamePrefixes;
    id<PDCloudStoreCounterpartRecordParserDataSource> _dataSource;
}

- (id)initWithDataSource:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addRecords:(id)a0;
- (id)allRecordsForItemType:(unsigned long long)a0;
- (id)allRecordsWithIdentifier:(id)a0 itemType:(unsigned long long)a1;
- (void)enumerateKeysAndObjectsForItemType:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeIdentifiers:(id)a0 itemType:(unsigned long long)a1;

@end
