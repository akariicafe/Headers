@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKSQLitePool : NSObject

@property (retain, nonatomic) NSMutableArray *dbs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL drainScheduled;
@property (readonly, nonatomic) id /* block */ factory;
@property (nonatomic) BOOL traced;

- (void)_drain;
- (void).cxx_destruct;
- (void)closeAll;
- (id)_openDatabaseWithError:(id *)a0;
- (id)initWithFactory:(id /* block */)a0 queueAttr:(id)a1;
- (id)_acquireDatabaseWithError:(id *)a0;
- (void)_scheduleDrain;
- (void)_closeDatabase:(id)a0;
- (void)releaseDatabase:(id)a0;
- (BOOL)performWithDatabase:(id /* block */)a0 error:(id *)a1;
- (id)initWithFactory:(id /* block */)a0;
- (id)acquireDatabase:(BOOL)a0;
- (id)acquireDatabaseWithError:(id *)a0;
- (void)performWithDatabase:(id /* block */)a0;

@end
