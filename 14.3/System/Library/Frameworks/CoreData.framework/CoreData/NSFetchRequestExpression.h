@class NSExpression;

@interface NSFetchRequestExpression : NSExpression {
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags { unsigned char isCountOnly : 1; unsigned int _RESERVED : 31; } _flags;
}

@property (readonly) NSExpression *requestExpression;
@property (readonly) NSExpression *contextExpression;
@property (readonly, getter=isCountOnlyRequest) BOOL countOnlyRequest;

+ (BOOL)supportsSecureCoding;
+ (id)expressionForFetch:(id)a0 context:(id)a1 countOnly:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)expressionType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initForFetch:(id)a0 context:(id)a1 countOnly:(BOOL)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
