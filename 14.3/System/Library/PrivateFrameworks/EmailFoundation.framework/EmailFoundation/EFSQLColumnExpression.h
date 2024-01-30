@class NSString, EFSQLDisqualifiedColumnExpression;

@interface EFSQLColumnExpression : NSObject <EFCacheable, EFSQLValueExpressable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly, nonatomic) EFSQLDisqualifiedColumnExpression *disqualified;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)column:(id)a0;
+ (id)table:(id)a0 column:(id)a1;
+ (id)allColumns;

- (id)is:(id)a0;
- (id)ef_SQLIsolatedExpression;
- (id)cachedSelf;
- (id)matchesMask:(id)a0;
- (id)expressionForPredicateOperatorType:(unsigned long long)a0 constValue:(id)a1;
- (id)equalTo:(id)a0;
- (void).cxx_destruct;
- (id)greaterThan:(id)a0;
- (id)isNull;
- (id)concatenate:(id)a0;
- (id)plus:(id)a0;
- (id)contains:(id)a0 caseSensitive:(BOOL)a1;
- (id)lessThan:(id)a0;
- (id)isNotNull;
- (id)notGlob:(id)a0;
- (id)notIn:(id)a0;
- (id)lessThanEqualTo:(id)a0;
- (id)notLike:(id)a0;
- (id)like:(id)a0 patternType:(unsigned long long)a1;
- (id)doesNotContain:(id)a0 caseSensitive:(BOOL)a1;
- (id)notLike:(id)a0 patternType:(unsigned long long)a1;
- (id)in:(id)a0;
- (id)minus:(id)a0;
- (void)ef_renderSQLExpressionInto:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)greaterThanEqualTo:(id)a0;
- (id)doesNotMatchMask:(id)a0;
- (id)beginsWith:(id)a0 caseSensitive:(BOOL)a1;
- (id)glob:(id)a0;
- (id)notEqualTo:(id)a0;
- (id)initWithName:(id)a0 table:(id)a1;
- (id)between:(id)a0;
- (id)isNot:(id)a0;
- (id)initWithName:(id)a0;
- (id)endsWith:(id)a0 caseSensitive:(BOOL)a1;
- (id)like:(id)a0;
- (id)notBetween:(id)a0;

@end
