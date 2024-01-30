@class NSMutableArray;

@interface SGCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_backingStore;
    unsigned long long _currentIndex;
    unsigned long long _capacity;
    unsigned long long _mutationDetector;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)allObjects;
- (id)initWithCapacity:(unsigned long long)a0;

@end
