@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer {
    struct OpaqueFigReentrantMutex { } *_lock;
}

- (void)setCapacity:(int)a0;
- (void)clear;
- (void)appendObject:(id)a0 forTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)firstObject;
- (id)lastObject;
- (void)dealloc;
- (id)description;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })firstTime;
- (void)reverseEnumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (void)extractTimeRangeFrom:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 until:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 into:(id)a2 times:(id)a3;
- (void)enumerateObjectsStartingAt:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 usingBlock:(id /* block */)a1;
- (id)initWithCapacity:(int)a0;
- (void)flushEntriesEarlierThan:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })lastTime;

@end
