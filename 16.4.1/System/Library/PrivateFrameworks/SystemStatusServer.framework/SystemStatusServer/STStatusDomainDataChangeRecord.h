@class BSMutableIntegerMap, BSIntegerSet;

@interface STStatusDomainDataChangeRecord : NSObject {
    BSMutableIntegerMap *_fallbackDataByClientKeyByDomain;
    BSMutableIntegerMap *_entriesByDomain;
    BSMutableIntegerMap *_cachedCurrentDataByDomain;
}

@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (id)fallbackDataForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void)setData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (void)addDiff:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;
- (id)currentDataForDomain:(unsigned long long)a0;
- (id)init;
- (void)removeAllEntriesForClientKey:(id)a0 domain:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setFallbackData:(id)a0 forClientKey:(id)a1 domain:(unsigned long long)a2;

@end
