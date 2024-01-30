@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSinkIndex;
}

- (id)nextObject;
- (id)_nextUnvisitedParent:(id)a0;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;
- (void)dealloc;

@end
