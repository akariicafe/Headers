@class NSString;

@interface HDSQLiteOrderingTerm : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *expression;
@property (readonly, nonatomic) BOOL ascending;

+ (id)orderingTermWithProperty:(id)a0 entityClass:(Class)a1 ascending:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExpression:(id)a0 ascending:(BOOL)a1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)SQL;

@end
