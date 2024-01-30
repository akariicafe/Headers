@class NSSQLEntity, NSFetchIndexDescription, NSMutableArray;

@interface NSSQLIndex : NSObject

@property (readonly, retain, nonatomic) NSFetchIndexDescription *indexDescription;
@property (readonly, nonatomic) NSSQLEntity *sqlEntity;
@property (retain, nonatomic) NSMutableArray *createTableStatements;
@property (retain, nonatomic) NSMutableArray *dropTableStatements;
@property (retain, nonatomic) NSMutableArray *updateTableStatements;

- (void)dealloc;
- (id)dropStatementsForStore:(id)a0;
- (id)generateStatementsForStore:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)bulkUpdateStatementsForStore:(id)a0;
- (id)initForIndexDescription:(id)a0 sqlEntity:(id)a1;
- (BOOL)isUnique;

@end
