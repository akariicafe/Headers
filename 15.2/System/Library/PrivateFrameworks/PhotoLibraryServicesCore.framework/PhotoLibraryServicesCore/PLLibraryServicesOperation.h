@class NSProgress, NSString;

@interface PLLibraryServicesOperation : NSBlockOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cancellationLock;
    BOOL _cancellationBlockCalled;
}

@property (class, nonatomic) BOOL shouldSuppressLogging;

@property (nonatomic) long long requiredState;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) long long progressPercentOfTotal;
@property (copy, nonatomic) id /* block */ cancellationBlock;
@property (copy) NSString *logPrefix;

+ (id)operationWithName:(id)a0 requiredState:(long long)a1 parentProgress:(id)a2 execution:(id /* block */)a3;

- (void)_safeRemoveCancellationObserver;
- (void)setExecutionBlockFromOperationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_runOperationBlock:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)debugDescription;

@end
