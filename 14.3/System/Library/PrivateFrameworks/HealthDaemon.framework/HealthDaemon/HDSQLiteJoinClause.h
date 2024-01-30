@class NSString;

@interface HDSQLiteJoinClause : NSObject {
    NSString *_joinAsName;
}

@property (readonly, copy, nonatomic) NSString *localTable;
@property (readonly, nonatomic) Class targetEntityClass;
@property (readonly, copy, nonatomic) NSString *joinAsName;
@property (readonly, copy, nonatomic) NSString *localReferenceProperty;
@property (readonly, copy, nonatomic) NSString *targetKeyProperty;
@property (readonly, nonatomic) long long joinType;

+ (id)innerJoinClauseFromTable:(id)a0 toTargetEntity:(Class)a1 as:(id)a2 localReference:(id)a3 targetKey:(id)a4;
+ (id)leftJoinClauseFromTable:(id)a0 toTargetEntity:(Class)a1 as:(id)a2 localReference:(id)a3 targetKey:(id)a4;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)_initWithJoinType:(long long)a0 fromTable:(id)a1 toTargetEntity:(Class)a2 as:(id)a3 localReference:(id)a4 targetKey:(id)a5;
- (id)description;
- (id)SQLJoinClause;
- (BOOL)isEqual:(id)a0;
- (id)copyWithJoinType:(long long)a0;

@end
