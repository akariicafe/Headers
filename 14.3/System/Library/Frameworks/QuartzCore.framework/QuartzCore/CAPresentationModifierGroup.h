@interface CAPresentationModifierGroup : NSObject {
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;

+ (id)groupWithCapacity:(unsigned long long)a0;

- (void)dealloc;
- (void)markWritten:(unsigned long long)a0;
- (unsigned long long)nextSlot;
- (void)flush;
- (struct Shmem { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; unsigned long long x2; void *x3; unsigned int x4; struct Atomic { struct { int x0; } x0; } x5; void /* function */ *x6; void *x7; } *)shmem;
- (void)resetBitMask;
- (id)initWithCapacity:(unsigned long long)a0;

@end
