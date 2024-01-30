@class NSSubstringPredicateOperator;

@interface NSInPredicateOperator : NSPredicateOperator {
    unsigned long long _flags;
    NSSubstringPredicateOperator *_stringVersion;
}

+ (BOOL)supportsSecureCoding;

- (void)_setOptions:(unsigned long long)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)symbol;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)dealloc;
- (id)stringVersion;
- (id)initWithCoder:(id)a0;
- (unsigned long long)flags;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)options;

@end
