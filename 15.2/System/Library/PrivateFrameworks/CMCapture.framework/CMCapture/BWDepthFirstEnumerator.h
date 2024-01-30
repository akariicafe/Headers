@class NSMutableArray;

@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSourceIndex;
}

- (id)nextObject;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;
- (void)dealloc;
- (id)_nextUnvisitedChild:(id)a0;

@end
