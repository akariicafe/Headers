@class NSSet, NSString;

@interface CPLScopeFilter : NSObject

@property (readonly, nonatomic) NSSet *includedScopeIdentifiers;
@property (readonly, nonatomic) NSSet *excludedScopeIdentifiers;
@property (readonly, nonatomic) NSString *simpleDescription;

- (id)_setOfScopeIdentifiersFromEnumeration:(id)a0;
- (id)description;
- (BOOL)filterOnScopeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)initWithIncludedScopeIdentifiers:(id)a0;
- (id)initWithExcludedScopeIdentifiers:(id)a0;

@end
