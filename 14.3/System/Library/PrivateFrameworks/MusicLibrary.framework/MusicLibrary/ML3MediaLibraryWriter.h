@class NSMutableDictionary, NSTimer, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue, ML3MediaLibraryWriterDelegate;

@interface ML3MediaLibraryWriter : NSObject {
    NSTimer *_watchdogTimer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableDictionary *transactionMap;
@property (readonly, nonatomic) NSOperationQueue *databaseOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *databaseOperationSerialQueue;
@property (weak, nonatomic) id<ML3MediaLibraryWriterDelegate> delegate;
@property (nonatomic) double transactionTimeout;
@property (nonatomic, getter=isSuspended) BOOL suspended;

+ (id)writerErrorWithCode:(long long)a0 description:(id)a1;
+ (id)writerErrorWithCode:(long long)a0 description:(id)a1 userInfo:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)description;
- (id)beginTransactionForLibrary:(id)a0 withClient:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
- (BOOL)endTransaction:(id)a0 shouldCommit:(BOOL)a1 error:(id *)a2;
- (void)_setupWatchdogTimer;
- (void)_tearDownWatchdogTimer;
- (void)cancelAllActiveTransactions;
- (id)_createNewTransactionForLibrary:(id)a0 fromClient:(id)a1 readOnly:(BOOL)a2;
- (void)_destroyTransactionForIdentifier:(id)a0 forceRelinquishConnection:(BOOL)a1;
- (id)_transactionForIdentifier:(id)a0;
- (BOOL)executeUpdate:(id)a0 withParameters:(id)a1 onTransaction:(id)a2 error:(id *)a3;
- (id)executeQuery:(id)a0 withParameters:(id)a1 options:(id)a2 onTransaction:(id)a3 error:(id *)a4;
- (id)_allDatabaseOperations;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(BOOL)a0;
- (void)_registerTransaction:(id)a0;
- (void)_unregisterTransaction:(id)a0;
- (void)_destroyTransaction:(id)a0 forceRelinquishConnection:(BOOL)a1;
- (void)_watchdogTimerFired:(id)a0;
- (BOOL)_shouldWatchdogTransaction:(id)a0;
- (BOOL)executeUntrustedUpdate:(id)a0 withParameters:(id)a1 onTransaction:(id)a2 error:(id *)a3;
- (id)executeUntrustedQuery:(id)a0 withParameters:(id)a1 options:(id)a2 onTransaction:(id)a3 error:(id *)a4;
- (void)performDatabaseOperation:(unsigned long long)a0 onLibrary:(id)a1 withAttributes:(id)a2 options:(id)a3 fromClient:(id)a4 completionHandler:(id /* block */)a5;
- (void)cancelActiveTransactionForClient:(id)a0;

@end
