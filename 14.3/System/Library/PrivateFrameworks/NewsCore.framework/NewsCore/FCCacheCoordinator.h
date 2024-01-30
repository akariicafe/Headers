@class NSCountedSet, FCThreadSafeMutableDictionary, NSSet, NSMutableSet, FCCacheCoordinatorFlushPolicy, NSString, NFUnfairLock;
@protocol FCCacheCoordinatorDelegate, FCOperationThrottler, FCCacheCoordinatorLocking;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>

@property (retain, nonatomic) NSMutableSet *storedKeys;
@property (retain, nonatomic) NSCountedSet *interestedKeys;
@property (retain, nonatomic) FCThreadSafeMutableDictionary *cacheHintsByKey;
@property (retain, nonatomic) NFUnfairLock *interestLock;
@property (retain, nonatomic) id<FCCacheCoordinatorLocking> underlyingLock;
@property (retain, nonatomic) id<FCOperationThrottler> flushThrottler;
@property (retain) FCCacheCoordinatorFlushPolicy *flushPolicy;
@property (getter=isFlushingEnabled) BOOL flushingEnabled;
@property (weak, nonatomic) id<FCCacheCoordinatorDelegate> delegate;
@property (readonly, nonatomic) NSSet *keysWithZeroInterest;
@property (readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)holdTokensForKeys:(id)a0;
- (id)addInterestInKeys:(id)a0;
- (void)setupWithInitialKeys:(id)a0;
- (id)persistableHints;
- (id)init;
- (void)didRemoveKeysFromCache:(id)a0;
- (void).cxx_destruct;
- (void)performReadSync:(id /* block */)a0;
- (void)dealloc;
- (void)operationThrottlerPerformOperation:(id)a0;
- (void)removeInterestInKeys:(id)a0;
- (void)_modifyCacheHintForKeys:(id)a0 withBlock:(id /* block */)a1;
- (void)setupWithInitialKeys:(id)a0 persistedHints:(id)a1;
- (BOOL)cacheContainsKey:(id)a0;
- (void)performWriteSync:(id /* block */)a0;
- (void)didInsertKeysIntoCache:(id)a0 withLifetimeHints:(id)a1;
- (void)performCacheWrite:(id /* block */)a0;
- (BOOL)shouldMaintainCacheHints;
- (void)didInsertKeyIntoCache:(id)a0;
- (void)enableFlushingWithPolicy:(id)a0;
- (void)didAccessKeys:(id)a0;
- (id)holdTokenForKeys:(id)a0;
- (id)filterKeysForPreemptiveFlush:(id)a0 cacheHints:(id)a1;
- (id)holdTokenForKey:(id)a0;
- (void)didInsertKeyIntoCache:(id)a0 withLifetimeHint:(long long)a1;
- (void)performCacheRead:(id /* block */)a0;

@end
