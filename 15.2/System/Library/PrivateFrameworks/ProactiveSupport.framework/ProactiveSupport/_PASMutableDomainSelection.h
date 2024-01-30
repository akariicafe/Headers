@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (BOOL)containsDomain:(id)a0;
- (BOOL)addDomain:(id)a0;
- (id)allDomains;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)_addDomainsFrom:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)addDomainsFromArray:(id)a0;
- (BOOL)addDomainsFromSet:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)_decrementCountAndMaybePruneItems:(id)a0;
- (void)dealloc;
- (BOOL)addDomainsFromSelection:(id)a0;

@end
