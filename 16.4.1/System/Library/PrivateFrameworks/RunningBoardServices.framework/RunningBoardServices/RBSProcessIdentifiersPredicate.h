@class NSSet;

@interface RBSProcessIdentifiersPredicate : RBSProcessCollectionPredicateImpl

@property (readonly, nonatomic) NSSet *processIdentifiers;

- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)matchesProcess:(id)a0;
- (id)initWithIdentifiers:(id)a0;

@end
