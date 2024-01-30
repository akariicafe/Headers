@class HMFUnfairLock, NSMutableArray;

@interface HMIVideoEventBuffer : HMFObject {
    NSMutableArray *_data;
    HMFUnfairLock *_lock;
    long long _maxCapacity;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithMaxCapacity:(long long)a0;
- (id)description;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)objectsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 includeEnd:(BOOL)a1;
- (id)extractObjectsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)neighborsOfObject:(id)a0;

@end
