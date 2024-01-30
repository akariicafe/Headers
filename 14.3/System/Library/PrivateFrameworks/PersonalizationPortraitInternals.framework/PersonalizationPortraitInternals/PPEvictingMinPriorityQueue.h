@interface PPEvictingMinPriorityQueue : NSObject {
    unsigned long long _capacity;
    struct priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> >, PPScoredItemCompareGreater> { struct vector<PPScoredItem *, std::__1::allocator<PPScoredItem *> > { id *x0; id *x1; struct __compressed_pair<PPScoredItem *__strong *, std::__1::allocator<PPScoredItem *> > { id *x0; } x2; } x0; struct PPScoredItemCompareGreater { } x1; } *_queue;
}

@property (readonly, nonatomic) double count;

- (id)init;
- (void)dealloc;
- (id)popItem;
- (void)addObject:(id)a0;
- (id)extractSortedMutableArray;
- (id)initWithCapacity:(unsigned long long)a0;

@end
