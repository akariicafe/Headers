@interface GEOMapEdgeRoadConnectionFinder : GEOMapEdgeConnectionFinder

- (BOOL)_isRoadEdgeEqual:(id)a0 other:(id)a1;
- (void)_findConnectedEdges:(id /* block */)a0 incoming:(BOOL)a1;
- (void)_findConnections:(id /* block */)a0 incoming:(BOOL)a1;

@end
