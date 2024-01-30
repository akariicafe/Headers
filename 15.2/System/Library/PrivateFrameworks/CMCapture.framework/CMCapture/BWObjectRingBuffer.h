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

- (id)firstObject;
- (id)lastObject;
- (void)clear;
- (id)description;
- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;
- (void)enumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)appendObject:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_enumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (void)_checkAscendingInsertAt:(int)a0 object:(id)a1 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (int)_findClosestOffsetToTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_reverseEnumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (void)_forceAscendingTo:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })firstTime;
- (id)getObjectForIndex:(int)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getTimeForIndex:(int)a0;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)extractTimeRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 into:(id)a2 times:(id)a3;
- (void)flushEntriesEarlierThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
