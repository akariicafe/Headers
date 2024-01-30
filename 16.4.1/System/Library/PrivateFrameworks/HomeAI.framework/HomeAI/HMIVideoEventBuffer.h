@class NSMutableArray;

@interface HMIVideoEventBuffer : HMFObject {
    NSMutableArray *_data;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _maxCapacity;
}

@property (readonly) unsigned long long count;

- (void)addObject:(id)a0;
- (id)firstObject;
- (void)removeAllObjects;
- (id)initWithMaxCapacity:(long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)extractObjectsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)neighborsOfObject:(id)a0;
- (id)objectsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 includeEnd:(BOOL)a1;

@end
