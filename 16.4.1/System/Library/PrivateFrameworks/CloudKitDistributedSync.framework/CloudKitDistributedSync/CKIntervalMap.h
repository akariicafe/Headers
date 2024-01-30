@class CKIntervalMapRangeMapContainer;

@interface CKIntervalMap : NSObject

@property (readonly, nonatomic) CKIntervalMapRangeMapContainer *rangeMap;
@property (nonatomic) BOOL dirty;

- (BOOL)containsIndex:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)containsIndexes:(id)a0;
- (id)allIndexes;
- (void)enumerateObjectsForIndexes:(id)a0 usingBlock:(id /* block */)a1;
- (void)maintainInvariants;

@end
