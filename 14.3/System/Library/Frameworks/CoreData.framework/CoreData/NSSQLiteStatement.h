@class NSSQLEntity, NSCachedFetchRequestInfo, NSString, NSMutableArray;

@interface NSSQLiteStatement : NSObject {
    NSSQLEntity *_entity;
    NSMutableArray *_bindVariables;
    NSMutableArray *_bindIntarrays;
    NSString *_sqlString;
    BOOL _isImpossibleCondition;
    NSSQLEntity *_fakeEntityForFetch;
    struct sqlite3_stmt { } *_cachedSQLiteStatement;
    void *_owner;
}

@property (retain, nonatomic) NSCachedFetchRequestInfo *cachedStatementInfo;
@property (nonatomic) BOOL trackChangedRowCount;

- (void)setImpossibleCondition:(BOOL)a0;
- (void)removeAllBindVariables;
- (void)clearCaches:(BOOL)a0;
- (BOOL)isReadOnly;
- (struct sqlite3_stmt { } *)cachedSQLiteStatement;
- (id)bindIntarrays;
- (id)initWithEntity:(id)a0 sqlString:(id)a1;
- (id)bindVariables;
- (BOOL)isImpossibleCondition;
- (void)setBindIntarrays:(id)a0;
- (void)removeAllBindIntarrays;
- (void)dealloc;
- (unsigned int)addBindIntarray:(id)a0;
- (id)sqlString;
- (void)setCachedSQLiteStatement:(struct sqlite3_stmt { } *)a0 forConnection:(id)a1;
- (id)fakeEntityForFetch;
- (id)entity;
- (void)setSQLString:(id)a0;
- (id)description;
- (void)setBindVariables:(id)a0;
- (id)initWithEntity:(id)a0;
- (unsigned int)addBindVariable:(id)a0;
- (void)cacheFakeEntityForFetch:(id)a0;

@end
