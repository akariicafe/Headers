@class CSSuggestion;

@interface EMQuery : EFQuery

@property (copy, nonatomic) CSSuggestion *suggestion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqualToQuery:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTargetClass:(Class)a0 predicate:(id)a1 sortDescriptors:(id)a2 suggestion:(id)a3 limit:(long long)a4 queryOptions:(unsigned long long)a5 label:(id)a6;
- (void).cxx_destruct;

@end
