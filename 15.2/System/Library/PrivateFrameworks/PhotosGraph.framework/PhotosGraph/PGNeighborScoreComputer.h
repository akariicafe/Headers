@class NSMutableDictionary;

@interface PGNeighborScoreComputer : NSObject {
    NSMutableDictionary *_momentNodeCachedValuesByIdentifier;
    unsigned long long _numberOfMomentNodes;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _numberOfMomentNodesLock;
}

- (void).cxx_destruct;
- (id)init;
- (id)_momentNodeCachedValuesForIdentifier:(unsigned long long)a0;
- (double)neighborScoreWithMomentNode:(id)a0;
- (double)neighborScoreWithHighlightNode:(id)a0;
- (double)maximumNeighborScoreWithMomentNodes:(id)a0;
- (double)_densityScoreWithNeighborMomentNodes:(id)a0 referenceDate:(id)a1 andNumberOfAssets:(unsigned long long)a2;
- (double)_peopleScoreWithNeighborMomentNodes:(id)a0 referenceDate:(id)a1 andPersonLocalIdentifiers:(id)a2;
- (double)_locationScoreWithNeighborMomentNodes:(id)a0 referenceDate:(id)a1 andLocationCoordinate:(const struct CLLocationCoordinate2D { double x0; double x1; } *)a2;
- (double)_calculateScoreWithNeighborMomentNodes:(id)a0 referenceDate:(id)a1 andDistanceBlock:(id /* block */)a2;
- (double)_calculateScoreWithNeighborMomentNodes:(id)a0 referenceDate:(id)a1 referenceDistance:(double)a2 andDistanceBlock:(id /* block */)a3;
- (id)_personLocalIdentifiersForMomentNode:(id)a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })_bestLocationCoordinateForMomentNode:(id)a0;
- (id)_previousMomentNodeForMomentNode:(id)a0;
- (id)_nextMomentNodeForMomentNode:(id)a0;
- (BOOL)_hasAddressNodesForMomentNode:(id)a0;
- (id)neighborsFromMomentNode:(id)a0 count:(unsigned long long)a1 locationRequired:(BOOL)a2 minDayDuration:(unsigned long long)a3 maxDayDuration:(unsigned long long)a4;

@end
