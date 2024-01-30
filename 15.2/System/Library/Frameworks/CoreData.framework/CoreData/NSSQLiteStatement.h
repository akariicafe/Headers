@class NSSQLEntity, NSString, NSCachedFetchRequestInfo, NSMutableArray;

@interface NSSQLiteStatement : NSObject {
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    BOOL _isImpossibleCondition;
    BOOL _trackChangedRowCount;
    NSSQLEntity *_fakeEntityForFetch;
    NSCachedFetchRequestInfo *_cachedStatementInfo;
    struct sqlite3_stmt { } *_cachedSQLiteStatement;
    void *_owner;
}

- (id)entity;
- (id)initWithEntity:(id)a0;
- (id)description;
- (id)sqlString;
- (id)bindIntarrays;
- (void)dealloc;
- (id)bindVariables;
- (id)initWithEntity:(id)a0 sqlString:(id)a1;

@end
