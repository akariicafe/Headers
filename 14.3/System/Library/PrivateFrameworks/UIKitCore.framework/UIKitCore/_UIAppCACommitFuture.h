@interface _UIAppCACommitFuture : NSObject {
    id /* block */ _block;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=_isFinished) BOOL finished;

+ (id)scheduledPreCommitFuture:(id /* block */)a0;
+ (id)scheduledPostCommitFuture:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithPhase:(unsigned long long)a0 block:(id /* block */)a1;
- (void)_invoke;
- (void)invalidate;

@end
