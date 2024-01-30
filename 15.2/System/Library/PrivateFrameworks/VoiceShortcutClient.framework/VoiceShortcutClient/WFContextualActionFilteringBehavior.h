@class NSSet, NSPredicate;

@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *matchingTypes;
@property (readonly, nonatomic) NSPredicate *filesPredicate;
@property (readonly, nonatomic) NSPredicate *thoroughFilteringPredicate;

+ (id)matchAllFiles;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1;
+ (id)filteringWithMatchingTypes:(id)a0 predicate:(id)a1 thoroughFilteringPredicate:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithMatchingTypes:(id)a0 filesPredicate:(id)a1 thoroughFilteringPredicate:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
