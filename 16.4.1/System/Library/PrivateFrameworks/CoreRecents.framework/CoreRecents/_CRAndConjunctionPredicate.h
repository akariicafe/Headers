@class NSArray;

@interface _CRAndConjunctionPredicate : CRSearchPredicate

@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)asNSPredicate;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSubpredicates:(id)a0;

@end
