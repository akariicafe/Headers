@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSSet *joinClauses;

+ (id)predicateWithJoinClauses:(id)a0;

- (id)SQLJoinClausesForEntityClass:(Class)a0;
- (void).cxx_destruct;

@end
