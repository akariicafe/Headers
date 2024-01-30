@class NSMutableArray;

@interface AMDMinHeap : NSObject

@property (retain, nonatomic) NSMutableArray *objects;
@property (copy) id /* block */ comparator;
@property unsigned long long capacity;
@property unsigned long long position;

- (BOOL)add:(id)a0;
- (BOOL)isEmpty;
- (unsigned long long)size;
- (void).cxx_destruct;
- (id)topN;
- (void)bubbleUp;
- (id)initWithCapacity:(unsigned long long)a0 comparator:(id /* block */)a1;
- (id)poll;
- (void)pushDown;
- (void)swap:(unsigned long long)a0 with:(unsigned long long)a1;

@end
