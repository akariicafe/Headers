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
+ (id)inMemoryDatabaseURL;
+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)a0;
+ (id)_errorWithErrorCode:(int)a0;
+ (id)writeAheadLogURLForDatabaseURL:(id)a0;
+ (id)privateOnDiskDatabaseURL;

- (id)checkIntegrity;
- (BOOL)executeQuery:(id)a0 error:(id *)a1;
- (BOOL)tryToPerformTransactionInBlock:(id /* block */)a0;
- (BOOL)openWithAccessType:(long long)a0 protectionType:(long long)a1 vfs:(id)a2 error:(id *)a3;
- (BOOL)enableWAL:(id *)a0;
- (id)fetchQuery:(id)a0;
- (int)close;
- (id)fetchQuery:(id)a0 stringArguments:(id)a1;
- (id)initWithURL:(id)a0 queue:(id)a1;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)a0 checkpointedFrameCount:(int *)a1;
- (BOOL)openWithAccessType:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)reportErrorWithCode:(int)a0 query:(id)a1 error:(id *)a2;
- (void)_reportSevereError:(id)a0;
- (BOOL)openWithAccessType:(long long)a0 vfs:(id)a1 error:(id *)a2;
- (void)setBusyTimeout:(double)a0;
- (BOOL)_openWithFlags:(int)a0 vfs:(id)a1 error:(id *)a2;
- (BOOL)reportErrorWithCode:(int)a0 statement:(struct sqlite3_stmt { } *)a1 error:(id *)a2;
- (void)dealloc;

@end
