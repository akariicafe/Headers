@interface PLSyncCancellingProgress : NSProgress

@property (copy) id /* block */ pl_cancellationHandler;

+ (id)discreteProgressWithTotalUnitCount:(long long)a0;

- (void)cancel;
- (void)setCancellationHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
