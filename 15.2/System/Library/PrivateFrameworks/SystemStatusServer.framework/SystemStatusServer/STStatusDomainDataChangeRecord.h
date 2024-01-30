@class BSMutableIntegerMap, BSIntegerSet;

@interface STStatusDomainDataChangeRecord : NSObject

@property (readonly, copy, nonatomic) BSMutableIntegerMap *fallbackDataByClientKeyByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *entriesByDomain;
@property (readonly, copy, nonatomic) BSMutableIntegerMap *cachedCurrentDataByDomain;
@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (id)currentDataForDomain:(unsigned long long)a0;
- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_combineTrailingDiffEntriesIfPossible:(id)a0;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;

@end
