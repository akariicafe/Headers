@interface BWObjectRingBuffer : NSObject {
    id *_objects;
    struct { long long x0; int x1; unsigned int x2; long long x3; } *_times;
    int _oldest;
}

@property (readonly, nonatomic) int count;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) BOOL ascending;
@property (nonatomic) BOOL expectAscending;

+ (void)initialize;

- (void)clear;
- (void)appendObject:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)firstObject;
- (id)lastObject;
- (void)dealloc;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })firstTime;
- (void)_enumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (int)_findClosestOffsetToTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_checkAscendingInsertAt:(int)a0 object:(id)a1 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_reverseEnumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (void)_forceAscendingTo:(BOOL)a0;
- (id)getObjectForIndex:(int)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getTimeForIndex:(int)a0;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)extractTimeRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 into:(id)a2 times:(id)a3;
- (void)enumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (id)initWithCapacity:(int)a0;
- (void)flushEntriesEarlierThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;

@end
