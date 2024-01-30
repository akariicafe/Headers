@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSinkIndex;
}

- (void)dealloc;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;
- (id)nextObject;
- (id)_nextUnvisitedParent:(id)a0;

@end
