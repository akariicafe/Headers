@interface _UIAppCACommitFuture : NSObject {
    id /* block */ _block;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=_isFinished) BOOL finished;

+ (id)scheduledPostCommitFuture:(id /* block */)a0;
+ (id)scheduledPreCommitFuture:(id /* block */)a0;

- (id)initWithPhase:(unsigned long long)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invoke;

@end
