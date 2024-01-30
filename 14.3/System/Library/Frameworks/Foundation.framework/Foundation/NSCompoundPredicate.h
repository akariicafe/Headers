@class NSArray;

@interface NSCompoundPredicate : NSPredicate {
    void *_reserved2;
    unsigned long long _type;
    NSArray *_subpredicates;
}

@property (readonly) unsigned long long compoundPredicateType;
@property (readonly, copy) NSArray *subpredicates;

+ (BOOL)supportsSecureCoding;
+ (id)notPredicateWithSubpredicate:(id)a0;
+ (id)andPredicateWithSubpredicates:(id)a0;
+ (id)_operatorForType:(unsigned long long)a0;
+ (id)orPredicateWithSubpredicates:(id)a0;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)allowEvaluation;
- (id)initWithType:(unsigned long long)a0 subpredicates:(id)a1;
- (id)_copySubpredicateDescription:(id)a0;
- (void)_acceptSubpredicates:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)generateMetadataDescription;
- (id)predicateOperator;
- (id)_predicateOperator;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)predicateWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
