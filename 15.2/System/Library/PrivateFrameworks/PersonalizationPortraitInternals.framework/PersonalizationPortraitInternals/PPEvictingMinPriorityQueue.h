@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (id)getMinItemWithoutPopping;
- (unsigned long long)capacity;
- (id)init;
- (void)addObject:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)popItem;
- (void)dealloc;
- (id)extractSortedMutableArray;

@end
