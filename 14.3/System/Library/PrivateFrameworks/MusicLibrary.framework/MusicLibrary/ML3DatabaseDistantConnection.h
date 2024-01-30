@class MLMediaLibraryService, NSUUID;
@protocol ML3DatabaseDistantConnectionDelegate;

@interface ML3DatabaseDistantConnection : ML3DatabaseConnection {
    MLMediaLibraryService *_mediaLibraryService;
    NSUUID *_currentTransactionID;
    BOOL _connectionOpen;
}

@property (weak, nonatomic) id<ML3DatabaseDistantConnectionDelegate> distantDelegate;

- (void)setReadOnly:(BOOL)a0;
- (id)_internalExecuteQuery:(id)a0 withParameters:(id)a1 limitProperty:(id)a2 limitValue:(long long)a3;
- (BOOL)isReadOnly;
- (int)checkpointDatabase;
- (BOOL)_internalExecuteUpdate:(id)a0 withParameters:(id)a1 error:(id *)a2;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0;
- (BOOL)close;
- (void).cxx_destruct;
- (BOOL)isOpen;
- (void)dealloc;
- (struct sqlite3 { } *)_sqliteHandle;
- (id)currentTransactionID;
- (void)setProfilingLevel:(int)a0;
- (void)_serviceTerminatedTransactionNotification:(id)a0;
- (id)openBlobInTable:(id)a0 column:(id)a1 row:(long long)a2 readOnly:(BOOL)a3;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 block:(id /* block */)a2;
- (BOOL)registerFunctionName:(id)a0 argumentCount:(int)a1 functionPointer:(void /* function */ *)a2 userData:(void *)a3;
- (id)initWithDatabasePath:(id)a0;
- (BOOL)shouldCacheStatements;
- (BOOL)_openWithFlags:(int)a0;
- (BOOL)_internalBeginTransactionWithBehaviorType:(unsigned long long)a0 isRetry:(BOOL)a1;
- (BOOL)_internalEndTransactionAndCommit:(BOOL)a0;
- (BOOL)registerModule:(id)a0;

@end
