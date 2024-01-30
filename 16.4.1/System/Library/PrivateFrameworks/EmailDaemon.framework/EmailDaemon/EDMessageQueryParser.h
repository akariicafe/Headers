@class EDMessageQueryTransformer, EFSearchableIndexObjectPropertyMapper, EFSQLObjectPropertyMapper, EDSearchableIndex;

@interface EDMessageQueryParser : NSObject

@property (readonly, nonatomic) EDMessageQueryTransformer *transformer;
@property (readonly, nonatomic) EDSearchableIndex *searchableIndex;
@property (readonly, nonatomic) EFSQLObjectPropertyMapper *sqlPropertyMapper;
@property (readonly, nonatomic) EFSearchableIndexObjectPropertyMapper *searchableIndexMapper;

+ (id)performSearchableIndexQueryPredicate:(id)a0 propertyMapper:(id)a1 searchableIndex:(id)a2;

- (void).cxx_destruct;
- (id)initWithSchema:(id)a0 protectedSchema:(id)a1 searchableIndex:(id)a2 accountsProvider:(id)a3 vipManager:(id)a4 messagePersistence:(id)a5 mailboxPersistence:(id)a6;
- (id)sqlQueryForQuery:(id)a0;
- (id)sqlQueryForQuery:(id)a0 predicate:(id)a1;

@end
