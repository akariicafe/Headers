@class MPMediaLibrary, NSObject, MPConcreteMediaEntityPropertiesCache;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaItem : MPMediaItem <NSCopying, MPCacheableConcreteMediaEntity> {
    MPMediaLibrary *_library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;
    NSObject<OS_dispatch_queue> *_utilitySerialQueue;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;

+ (BOOL)supportsSecureCoding;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)a0 library:(id)a1;
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)a0;
+ (id)createUncachedConcreteMediaItemWithPersistentID:(unsigned long long)a0 library:(id)a1;

- (id)valueForProperty:(id)a0;
- (void)incrementPlayCount;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (BOOL)existsInLibrary;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)description;
- (id)valuesForProperties:(id)a0;
- (BOOL)didSkipWithPlayedToTime:(double)a0;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)a0 skipped:(BOOL)a1;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)a0;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)a0;
- (double)nominalHasBeenPlayedThreshold;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (unsigned long long)persistentID;
- (id)initWithPersistentID:(unsigned long long)a0 library:(id)a1;
- (id)_initWithPersistentID:(unsigned long long)a0 library:(id)a1 propertiesCache:(id)a2;
- (void)invalidateCachedProperties;
- (id)_nonBatchableOrCachedValueForProperty:(id)a0 needsFetch:(BOOL *)a1;
- (id)cachedValueForProperty:(id)a0 isCached:(BOOL *)a1;
- (id)mediaLibrary;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;

@end
