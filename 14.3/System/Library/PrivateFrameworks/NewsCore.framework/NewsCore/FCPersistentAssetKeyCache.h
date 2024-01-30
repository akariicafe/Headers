@class NSCountedSet, NSString, NSMutableDictionary, NFUnfairLock;

@interface FCPersistentAssetKeyCache : NSObject <FCAssetKeyCacheType, FCCacheFlushing, FCAppActivityObserving>

@property (readonly, copy, nonatomic) NSString *cachePath;
@property (readonly, nonatomic) NSMutableDictionary *cacheEntries;
@property (readonly, nonatomic) NFUnfairLock *cacheEntriesLock;
@property (retain, nonatomic) NSCountedSet *interestedKeys;
@property (retain, nonatomic) NFUnfairLock *interestLock;
@property BOOL flushingEnabled;
@property BOOL needsSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_persistenceCoder;

- (void)activityObservingApplicationDidEnterBackground;
- (void)_loadFromDisk;
- (void).cxx_destruct;
- (id)initWithCacheDirectory:(id)a0 cacheName:(id)a1;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)interestTokenForWrappingKeyIDs:(id)a0;
- (void)setWrappingKey:(id)a0 forWrappingKeyID:(id)a1;
- (void)saveIfNeeded;
- (void)_prepareForUse;
- (void)_saveToDisk;
- (id)wrappingKeyForWrappingKeyID:(id)a0;
- (void)removeAllWrappingKeys;

@end
