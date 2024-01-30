@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)_newOperatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)operatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)operatorWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
+ (SEL)_getSelectorForType:(unsigned long long)a0;
+ (id)_getSymbolForType:(unsigned long long)a0;

- (id)predicateFormat;
- (void)_setOptions:(unsigned long long)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (unsigned long long)operatorType;
- (id)symbol;
- (BOOL)performOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1;
- (void)_setModifier:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (SEL)selector;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithOperatorType:(unsigned long long)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (unsigned long long)modifier;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)options;

@end
