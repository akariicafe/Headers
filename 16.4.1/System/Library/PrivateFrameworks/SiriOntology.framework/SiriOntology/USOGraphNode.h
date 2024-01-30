@interface USOGraphNode : NSObject {
    struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *_usoGraphNode;
}

- (void)setSuccessor:(const void *)a0 successor:(id)a1 enumeration:(unsigned int)a2;
- (id)initWithCppGraphNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a0;

@end
