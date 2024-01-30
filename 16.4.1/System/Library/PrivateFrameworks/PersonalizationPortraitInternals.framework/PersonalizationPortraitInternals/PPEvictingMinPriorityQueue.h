@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (void)addObject:(id)a0;
- (id)getMinItemWithoutPopping;
- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)popItem;
- (id)extractSortedMutableArray;
- (id)init;

@end
