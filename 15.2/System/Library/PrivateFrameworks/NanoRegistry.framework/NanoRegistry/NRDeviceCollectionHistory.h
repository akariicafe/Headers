@class NRMutableDeviceCollection, NSMutableDictionary, NSMutableOrderedSet, NRSwitchRecordCollection, NRPBDeviceCollectionHistory, NSMutableArray;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSCopying, NSSecureCoding, NSFastEnumeration> {
    NSMutableOrderedSet *_observers;
    long long _maxHistoryDepth;
    _Atomic BOOL _atomicDirty;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    unsigned long long _startIndex;
    NSMutableArray *_history;
    NRSwitchRecordCollection *_switchRecords;
    NSMutableDictionary *_historyStateCache;
    NSMutableArray *_historyStateCacheMRU;
    NSMutableArray *_historyStateCacheIndex;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NRMutableDeviceCollection *deviceCollection;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long nextIndex;
@property (readonly, nonatomic) BOOL dirty;
@property (readonly, nonatomic) unsigned int switchIndex;
@property (readonly, nonatomic) NRPBDeviceCollectionHistory *protobuf;

- (id)addObserverQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)_createIndex;
- (void)child:(id)a0 didApplyDiff:(id)a1;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_truncateHistory;
- (id)applyDiff:(id)a0;
- (void)pruneStateCacheItems:(unsigned long long)a0;
- (void)removeObserver:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (id)switchDeviceIDFromDiff:(id)a0;
- (id)deviceIDAtSwitchIndex:(unsigned int)a0 date:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)notifyHistoryObserversWithEntry:(id)a0;
- (id)init;
- (BOOL)isEqualToHistory:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)invalidate;
- (id)_mostRecentStateBefore:(id)a0;
- (unsigned long long)_findIndexInHistoryStateCache:(id)a0 type:(unsigned long long)a1;
- (id)historyEntryAtIndex:(unsigned long long)a0;
- (void)_updateHistoryCachesWithIndex:(id)a0;

@end
