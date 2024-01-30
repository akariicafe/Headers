@class NSPredicate;

@interface NSPredicateRule : NURule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithPredicate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
