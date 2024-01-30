@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}

- (id)initWithGraph:(id)a0;
- (void)dealloc;
- (id)nextObject;

@end
