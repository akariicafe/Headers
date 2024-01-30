@class NSString, NSMutableArray, NSLock;

@interface SUScriptOperationDelegate : NSObject <ISOperationDelegate> {
    NSMutableArray *_operations;
    NSLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)enqueueOperation:(id)a0;
- (void)_removeOperation:(id)a0;
- (void)cancelAllOperations;
- (void)dealloc;
- (void)operationFinished:(id)a0;

@end
