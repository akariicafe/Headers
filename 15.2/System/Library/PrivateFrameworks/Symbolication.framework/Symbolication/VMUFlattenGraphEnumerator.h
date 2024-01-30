@class VMUGraphEnumerator;

@interface VMUFlattenGraphEnumerator : VMUGraphEnumerator {
    VMUGraphEnumerator *_graphEnumerator;
    void *_deliveredReachable;
    void *_topLevel;
    BOOL _iteratingTopLevel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateEdgesOfNode:(unsigned int)a0 withBlock:(id /* block */)a1;
- (id)statusDisplayDescription;
- (id)initWithGraph:(id)a0 graphEnumerator:(id)a1;

@end
