@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;
- (BOOL)containsDomain:(id)a0;
- (void).cxx_destruct;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (id)allDomains;

@end
