@class NSArray, NSMutableArray;

@interface IPCircularBufferArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_backingStore;
    unsigned long long _currentIndex;
    unsigned long long _capacity;
    unsigned long long _mutationDetector;
    id _lastObject;
}

@property (readonly, nonatomic) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id lastObject;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)addObject:(id)a0 completionHandler:(id /* block */)a1;

@end
