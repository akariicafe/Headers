@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder

- (BOOL)_isRoadEdgeEqual:(const struct { struct *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct *x5; struct *x6; } *)a0 other:(const struct { struct *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct *x5; struct *x6; } *)a1;
- (void)_findConnectedEdges:(id /* block */)a0 incoming:(BOOL)a1;
- (void)_findConnections:(id /* block */)a0 incoming:(BOOL)a1;

@end
