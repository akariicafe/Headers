@interface PPEvictingMaxTokenCountPriorityQueue : NSObject {
    unsigned long long _capacity;
    void *_queue;
}

@property (readonly, nonatomic) double count;

- (void)addObject:(id)a0;
- (unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)popItem;
- (id)init;
- (void)enumerateTokenCountsUsingBlock:(id /* block */)a0;
- (id)getMaxItemWithoutPopping;

@end
