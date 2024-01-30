@interface NSStorage : NSObject {
    id _storage;
    long long _hintCapacity;
    unsigned long long _reserved[4];
}

+ (void)initialize;

- (unsigned long long)capacity;
- (void *)pointerToElement:(unsigned long long)a0 directlyAccessibleElements:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)init;
- (void)setHintCapacity:(unsigned long long)a0;
- (void)addElement:(void *)a0;
- (void *)elementAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)elementSize;
- (id)description;
- (id)initWithElementSize:(unsigned long long)a0 capacity:(unsigned long long)a1;
- (void)insertElement:(void *)a0 atIndex:(unsigned long long)a1;
- (void)enumerateElementsUsingBlock:(id /* block */)a0;
- (unsigned long long)count;
- (void)removeElementAtIndex:(unsigned long long)a0;
- (unsigned long long)hintCapacity;
- (void)insertElements:(void *)a0 count:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)replaceElementAtIndex:(unsigned long long)a0 withElement:(void *)a1;

@end
