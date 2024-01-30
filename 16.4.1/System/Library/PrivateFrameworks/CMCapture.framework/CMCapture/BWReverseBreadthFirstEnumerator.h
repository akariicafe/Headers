@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}

- (id)nextObject;
- (id)initWithGraph:(id)a0;
- (void)dealloc;

@end
