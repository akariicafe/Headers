@class NSCountedSet, NSString, NSMutableDictionary, NFUnfairLock;

@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving> {
    BOOL _flushingEnabled;
    BOOL _needsSave;
    NSString *_cachePath;
    NSMutableDictionary *_cacheEntries;
    NFUnfairLock *_cacheEntriesLock;
    NSCountedSet *_interestedKeys;
    NFUnfairLock *_interestLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllWrappingKeys;
- (id)wrappingKeyForWrappingKeyID:(id)a0;
- (void).cxx_destruct;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (void)activityObservingApplicationDidEnterBackground;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;

@end
