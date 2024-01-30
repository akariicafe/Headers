@class _PASLock, _PASSimpleCoalescingTimer;

@interface TRIPruningFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    _PASLock *_lock;
    _PASSimpleCoalescingTimer *_pruningTimer;
    double _pruningDelaySeconds;
}

- (id)initWithPruningDelaySeconds:(double)a0 loadFactorLevels:(id /* block */)a1;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)a0;
- (id)factorLevelCurrentlyCachedForFactorName:(id)a0;
- (void)pruneSynchronously;
- (void).cxx_destruct;
- (id)init;
- (void)_populateCacheForRequiredKey:(id)a0 guardedData:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;

@end
