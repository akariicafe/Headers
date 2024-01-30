@class NSSet;

@interface _PASImmutableDomainSelection : _PASDomainSelection {
    NSSet *_domains;
}

- (BOOL)containsDomain:(id)a0;
- (id)allDomains;
- (id)_initWithNonOverlappingDomainSet:(id)a0;
- (BOOL)isEqualToDomainSelection:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;

@end
