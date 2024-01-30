@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (BOOL)isEmpty;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)containsDomain:(id)a0;
- (BOOL)addDomain:(id)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (BOOL)addDomainsFromSelection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDomainsFromArray:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (unsigned long long)count;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (void)dealloc;
- (id)allDomains;
- (id)init;
- (BOOL)_addDomainsFrom:(id)a0;
- (void).cxx_destruct;
- (void)_decrementCountAndMaybePruneItems:(id)a0;

@end
