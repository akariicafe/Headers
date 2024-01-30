@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (id)nextObject;
- (id)initWithGraph:(id)a0;
- (void)dealloc;

@end
