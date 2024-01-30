@class NSArray, NSString, HDSynchronousTaskGroup, NSMutableArray;

@interface HDCloudSyncParallelOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    NSMutableArray *_operations;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy) NSArray *operations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (void)addOperationOfClass:(Class)a0;
- (void)addOperation:(id)a0;

@end
