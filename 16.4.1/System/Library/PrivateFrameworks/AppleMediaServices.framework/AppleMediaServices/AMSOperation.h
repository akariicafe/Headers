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

- (void)run;
- (void)lock;
- (void)main;
- (void)unlock;
- (BOOL)isCancelled;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)runSubOperation:(id)a0;
- (void)runSubOperation:(id)a0 onQueue:(id)a1;

@end
