@class NSError, NSOperationQueue, NSMutableArray;

@interface ML3DatabaseImportManager : NSObject {
    NSOperationQueue *_importOperationQueue;
    NSMutableArray *_suspendedImportOperations;
}

@property (retain, nonatomic) NSError *lastImportError;
@property (readonly, nonatomic) unsigned long long operationsCount;
@property (readonly, nonatomic) unsigned long long suspendedOperationsCount;
@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (void).cxx_destruct;
- (id)init;
- (id)_importOperations;
- (id)_suspendedImportOperations;
- (void)performImport:(id)a0 fromSource:(unsigned long long)a1 progressBlock:(id /* block */)a2 withCompletionHandler:(id /* block */)a3;
- (float)currentOperationProgressWithError:(id *)a0;
- (void)cancelAllImportOperations;
- (void)cancelImportOperationsOriginatingFromClient:(id)a0;
- (void)cancelImportOperationsForSource:(unsigned long long)a0 withCompletionHandler:(id /* block */)a1;
- (void)suspendImportOperations;
- (void)resumeSuspendedImportOperations;
- (void)_handleImportOperationCompleted:(id)a0;
- (void)_handleImportOperationCancelled:(id)a0;

@end
