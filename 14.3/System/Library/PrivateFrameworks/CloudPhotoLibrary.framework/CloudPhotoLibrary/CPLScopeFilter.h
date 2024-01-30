@class NSSet, NSString;

@interface CPLScopeFilter : NSObject

@property (readonly, nonatomic) NSSet *includedScopeIdentifiers;
@property (readonly, nonatomic) NSSet *excludedScopeIdentifiers;
@property (readonly, nonatomic) NSString *simpleDescription;

- (void).cxx_destruct;
- (id)description;
- (id)_setOfScopeIdentifiersFromEnumeration:(id)a0;
- (id)initWithIncludedScopeIdentifiers:(id)a0;
- (id)initWithExcludedScopeIdentifiers:(id)a0;
- (BOOL)filterOnScopeIdentifier:(id)a0;

@end
