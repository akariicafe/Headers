@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (id)initWithGraph:(id)a0;
- (void)addChildren:(id)a0;
- (void)dealloc;
- (id)nextObject;

@end
