@interface _NSBumpAllocator : NSObject {
    struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *_firstSlab;
    struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *_curSlab;
    char *_ptr;
    char *_endPtr;
}

- (void *)allocate:(unsigned long long)a0;
- (void)dealloc;
- (struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *)_allocateSlabWithSize:(unsigned long long)a0;
- (void)reset;

@end
