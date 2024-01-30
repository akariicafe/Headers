@class NSMutableArray, NSDate;

@interface DACActivityList : NSObject <NSSecureCoding, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *activeActivities;
@property (readonly, nonatomic) NSDate *lastModified;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)_updateModificationDate;
- (id)description;
- (void).cxx_destruct;
- (void)splitLocalOnly:(id /* block */)a0;
- (void)_activityDeltaFromList:(id)a0 completion:(id /* block */)a1;
- (void)_addActivityEntry:(id)a0;
- (id)_entryOfActivity:(id)a0;
- (unsigned long long)_indexOfActivity:(id)a0;
- (unsigned long long)_insertionIndex:(id)a0;
- (void)_reconcileReasons;
- (BOOL)_removeActivity:(id)a0 origin:(id)a1 ignoringActivationCount:(BOOL)a2;
- (unsigned long long)_stateOfActivity:(id)a0;
- (unsigned long long)_stateOfActivityAtIndex:(unsigned long long)a0;
- (void)_updateReason:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)activityCount;
- (BOOL)addActivity:(id)a0 requester:(id)a1;
- (void)changesFromList:(id)a0 info:(id /* block */)a1;
- (void)enumerateList:(id /* block */)a0;
- (BOOL)isEqualIgnoringLastModified:(id)a0;
- (BOOL)isEqualToActivityList:(id)a0;
- (id)listWithMerge:(id)a0;
- (BOOL)removeActivity:(id)a0 requester:(id)a1;
- (unsigned long long)stateOfActivity:(id)a0;

@end
