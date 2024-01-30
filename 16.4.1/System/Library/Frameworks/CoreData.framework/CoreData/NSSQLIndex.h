@class NSSQLEntity, NSFetchIndexDescription, NSMutableArray;

@interface NSSQLIndex : NSObject {
    NSMutableArray *_createStrings;
    NSMutableArray *_dropStrings;
    NSMutableArray *_updateStrings;
}

@property (readonly, retain, nonatomic) NSFetchIndexDescription *indexDescription;
@property (readonly, nonatomic) NSSQLEntity *sqlEntity;

- (id)bulkUpdateStatementsForStore:(id)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)dropStatementsForStore:(id)a0;
- (BOOL)isUnique;
- (id)generateStatementsForStore:(id)a0;
- (id)initForIndexDescription:(id)a0 sqlEntity:(id)a1;

@end
