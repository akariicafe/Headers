@class NSLock, NSMutableSet, AMSBinaryPromise, NSError;

@interface AMSOperation : NSOperation {
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
}

@property (weak, nonatomic) AMSOperation *parentOperation;
@property (readonly, nonatomic) AMSBinaryPromise *promise;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;

- (void)cancel;
- (void)run;
- (void)unlock;
- (void)lock;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)main;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;
- (void)runSubOperation:(id)a0;

@end
