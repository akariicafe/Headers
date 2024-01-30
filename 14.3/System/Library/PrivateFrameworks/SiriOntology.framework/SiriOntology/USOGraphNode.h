@interface USOGraphNode : NSObject {
    struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *_usoGraphNode;
}

- (id)initWithCppGraphNode:(struct UsoGraphNode { void /* function */ **x0; struct UsoGraph *x1; unsigned long long x2; } *)a0;
- (void)setSuccessor:(const struct OntologyEdgeName { void /* function */ **x0; int x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; int x3; } *)a0 successor:(id)a1 enumeration:(unsigned int)a2;

@end
