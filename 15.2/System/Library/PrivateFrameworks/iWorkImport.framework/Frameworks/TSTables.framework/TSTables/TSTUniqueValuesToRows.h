@class NSMutableDictionary;

@interface TSTUniqueValuesToRows : NSObject

@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowUids;
@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowIndexes;

- (void).cxx_destruct;
- (id)init;
- (void)clearRowIndexesCache;

@end
