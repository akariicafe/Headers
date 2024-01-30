@interface BWObjectRingBuffer : NSObject {
    id *_objects;
    struct { long long x0; int x1; unsigned int x2; long long x3; } *_times;
    int _oldest;
    BOOL _enforceAscending;
}

@property (readonly, nonatomic) int count;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) BOOL ascending;
@property (nonatomic) BOOL expectAscending;
@property (nonatomic) BOOL enforceAscending;

+ (void)initialize;

- (id)firstObject;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;
- (id)initWithCapacity:(int)a0;
- (void)dealloc;
- (id)lastObject;
- (id)description;
- (void)clear;
- (void)_enumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (int)_findClosestOffsetToTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_forceAscendingTo:(BOOL)a0;
- (void)_reverseEnumerateObjectsStartingAtOffset:(int)a0 usingBlock:(id /* block */)a1;
- (void)appendObject:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)enumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)extractTimeRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 into:(id)a2 times:(id)a3;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })firstTime;
- (void)flushEntriesEarlierThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;

@end
