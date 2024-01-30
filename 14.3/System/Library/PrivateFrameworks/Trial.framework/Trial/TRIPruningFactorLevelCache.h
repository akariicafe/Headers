@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    _PASLock *_lock;
    _PASSimpleCoalescingTimer *_pruningTimer;
    double _pruningDelaySeconds;
}

- (void)pruneSynchronously;
- (id)initWithPruningDelaySeconds:(double)a0 loadFactorLevels:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)factorLevelCurrentlyCachedForFactorName:(id)a0;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_populateCacheForRequiredKey:(id)a0 guardedData:(id)a1;

@end
