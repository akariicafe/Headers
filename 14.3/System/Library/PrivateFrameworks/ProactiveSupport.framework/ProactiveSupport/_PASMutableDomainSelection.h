@class NSMutableDictionary;

@interface _PASMutableDomainSelection : _PASDomainSelection {
    NSMutableDictionary *_domains;
    unsigned long long _count;
    BOOL _taintedByDeepDomain;
}

- (BOOL)addDomain:(id)a0;
- (BOOL)_addDomainsFromOtherDictionary:(id)a0 toOwnDictionary:(id)a1 ownDictionaryIsPlaceholder:(BOOL)a2;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;
- (id)init;
- (BOOL)containsDomain:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)addDomainsFromSelection:(id)a0;
- (BOOL)_addDomainsFrom:(id)a0;
- (id)allDomains;
- (BOOL)addDomainsFromArray:(id)a0;
- (unsigned long long)count;
- (BOOL)addDomainsFromSet:(id)a0;
- (void)_decrementCountAndMaybePruneItems:(id)a0;

@end
