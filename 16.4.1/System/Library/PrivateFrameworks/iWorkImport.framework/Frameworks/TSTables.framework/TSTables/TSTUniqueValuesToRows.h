@class NSMutableDictionary;

@interface TSTUniqueValuesToRows : NSObject

@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowUids;
@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowIndexes;

- (id)init;
- (void).cxx_destruct;
- (void)clearRowIndexesCache;

@end
