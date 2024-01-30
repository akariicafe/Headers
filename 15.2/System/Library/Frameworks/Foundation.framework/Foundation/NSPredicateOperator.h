@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying> {
    unsigned long long _operatorType;
    unsigned long long _modifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)operatorWithCustomSelector:(SEL)a0 modifier:(unsigned long long)a1;
+ (id)_newOperatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (id)operatorWithType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
+ (SEL)_getSelectorForType:(unsigned long long)a0;
+ (id)_getSymbolForType:(unsigned long long)a0;

- (id)symbol;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)_setOptions:(unsigned long long)a0;
- (unsigned long long)modifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)performOperationUsingObject:(id)a0 andObject:(id)a1;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 options:(unsigned long long)a2;
- (void)_setModifier:(unsigned long long)a0;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1;
- (id)description;
- (unsigned long long)operatorType;
- (unsigned long long)options;
- (SEL)selector;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperatorType:(unsigned long long)a0;
- (unsigned long long)hash;

@end
