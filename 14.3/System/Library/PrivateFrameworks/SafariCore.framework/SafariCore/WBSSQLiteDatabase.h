@class NSString, NSURL, NSError, NSObject;
@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;

@interface WBSSQLiteDatabase : NSObject

@property (weak, nonatomic) id<WBSSQLiteDatabaseDelegate> delegate;
@property (readonly, nonatomic) struct sqlite3 { } *handle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) int lastErrorCode;
@property (readonly, nonatomic) NSString *lastErrorMessage;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) long long lastInsertRowID;
@property (readonly, nonatomic) long long changedRowCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;
+ (id)privateOnDiskDatabaseURL;
+ (id)_errorWithErrorCode:(int)a0;
+ (id)writeAheadLogURLForDatabaseURL:(id)a0;
+ (id)inMemoryDatabaseURL;
+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)a0;

- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)a0 checkpointedFrameCount:(int *)a1;
- (id)checkIntegrity;
- (int)close;
- (BOOL)_openWithFlags:(int)a0 vfs:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)openWithAccessType:(long long)a0 protectionType:(long long)a1 vfs:(id)a2 error:(id *)a3;
- (void)_reportSevereError:(id)a0;
- (BOOL)executeQuery:(id)a0 error:(id *)a1;
- (id)fetchQuery:(id)a0 stringArguments:(id)a1;
- (id)initWithURL:(id)a0 queue:(id)a1;
- (BOOL)openWithAccessType:(long long)a0 vfs:(id)a1 error:(id *)a2;
- (BOOL)reportErrorWithCode:(int)a0 query:(id)a1 error:(id *)a2;
- (BOOL)tryToPerformTransactionInBlock:(id /* block */)a0;
- (BOOL)enableWAL:(id *)a0;
- (BOOL)openWithAccessType:(long long)a0 error:(id *)a1;
- (BOOL)reportErrorWithCode:(int)a0 statement:(struct sqlite3_stmt { } *)a1 error:(id *)a2;
- (id)fetchQuery:(id)a0;

@end
