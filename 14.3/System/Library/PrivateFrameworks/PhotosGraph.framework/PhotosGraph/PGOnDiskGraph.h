@interface PGOnDiskGraph : PGGraph

+ (Class)concreteGraphClass;

- (id)personNodeForPersonLocalIdentifier:(id)a0;
- (void)uncacheMomentNodesForMomentUUIDs:(id)a0;
- (void)cacheMomentNode:(id)a0 forMomentUUID:(id)a1 checkUnicity:(BOOL)a2;
- (id)momentNodesInSameCityAsMomentNodes:(id)a0;
- (void)cacheHighlightNode:(id)a0 forHighlightUUID:(id)a1 checkUnicity:(BOOL)a2;
- (void)cacheNodesWithProgressBlock:(id /* block */)a0;
- (void)uncacheMomentNodeForMomentUUID:(id)a0 checkExistence:(BOOL)a1;
- (id)sortedSocialGroupNodeForMomentNodeIdentifiers:(id)a0;
- (id)cachedMomentNodeForMomentUUID:(id)a0;
- (void)uncacheHighlightNodeForHighlightUUID:(id)a0 checkExistence:(BOOL)a1;
- (id)insertPersonNodeForPerson:(id)a0;
- (id)personNodesForPersonIdentifiers:(id)a0;
- (id)cachedHighlightNodeForHighlightUUID:(id)a0;
- (void)uncacheHighlightNodesForHighlightUUIDs:(id)a0;
- (id)dateNodeForLocalDate:(id)a0;
- (id)yearNodeIdentifiersForMomentNodeIdentifiers:(id)a0;
- (id)momentNodeIdentifiersForYearNodeIdentifiers:(id)a0;
- (id)allMomentUUIDs;

@end
