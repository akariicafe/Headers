@interface __NSSKGraphE : NSObject {
    struct edge { unsigned long long x0; unsigned long long x1[2]; unsigned long long x2; } *_edges;
    struct vertex { unsigned long long x0; unsigned long long x1; unsigned long long *x2; } *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

- (void)dealloc;

@end
