@class NSMutableArray;

@interface AMDMinHeap : NSObject

@property (retain, nonatomic) NSMutableArray *objects;
@property (copy) id /* block */ comparator;
@property unsigned long long capacity;
@property unsigned long long position;

- (BOOL)add:(id)a0;
- (id)topN;
- (id)poll;
- (unsigned long long)size;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0 comparator:(id /* block */)a1;
- (void)pushDown;
- (void)bubbleUp;
- (void)swap:(unsigned long long)a0 with:(unsigned long long)a1;

@end
