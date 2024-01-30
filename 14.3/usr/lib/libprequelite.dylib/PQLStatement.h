@class NSMutableArray;

@interface PQLStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
    PQLStatement *_next;
    NSMutableArray *_aliveBinds;
    id /* block */ _profilingHook;
    union { unsigned char inlined[8]; unsigned char *ptr; } _specUnion;
    BOOL _inUse;
    BOOL _isTraced;
    short _specLength;
}

@property (readonly, nonatomic) BOOL isTraced;

- (void)keepBindAlive:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)translate:(id)a0 hasInjections:(BOOL *)a1 arguments:(char *)a2;
- (void)unbindForDB:(id)a0 returnedRows:(unsigned long long)a1;
- (id)description;
- (void)bindArguments:(char *)a0 db:(id)a1;
- (id)initWithFormat:(id)a0 arguments:(char *)a1 db:(id)a2 cache:(struct cache_s { } *)a3;
- (id)initWithQueryBuilder:(id /* block */)a0 db:(id)a1 cache:(struct cache_s { } *)a2;
- (id)translate:(id)a0 withBuilder:(id)a1;
- (void)bindFromArray:(id)a0 db:(id)a1;
- (id)initWithStatement:(id)a0 forDB:(id)a1;
- (BOOL)_prepare:(const char *)a0 withDB:(id)a1;
- (void)invalidate;

@end
