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

- (id)mediaLibrary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (void)incrementPlayCount;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (BOOL)existsInLibrary;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valuesForProperties:(id)a0;
- (BOOL)didSkipWithPlayedToTime:(double)a0;
- (void)incrementSkipCount;
- (void)markNominalAmountHasBeenPlayed;
- (void)noteWasPlayedToTime:(double)a0 skipped:(BOOL)a1;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)a0;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)a0;
- (double)nominalHasBeenPlayedThreshold;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)persistentID;
- (void)dealloc;
- (void)setValue:(id)a0 forProperty:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)initWithPersistentID:(unsigned long long)a0 library:(id)a1;
- (void)invalidateCachedProperties;
- (id)_initWithPersistentID:(unsigned long long)a0 library:(id)a1 propertiesCache:(id)a2;
- (id)_nonBatchableOrCachedValueForProperty:(id)a0 needsFetch:(BOOL *)a1;
- (id)cachedValueForProperty:(id)a0 isCached:(BOOL *)a1;

@end
