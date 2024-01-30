@class PGGraph, MABinaryAdjacency;

@interface PGGraphLocationHelper : NSObject {
    PGGraph *_graph;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locationHelperLock;
    MABinaryAdjacency *_countryAdjacency;
    MABinaryAdjacency *_stateAdjacency;
    MABinaryAdjacency *_countyAdjacency;
    MABinaryAdjacency *_cityAdjacency;
    MABinaryAdjacency *_districtAdjacency;
    MABinaryAdjacency *_streetAdjacency;
    MABinaryAdjacency *_numberAdjacency;
}

+ (id)inefficientLocationHelper;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 reverse:(BOOL)a2;
- (id)_closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2 reverse:(BOOL)a3;
- (id)relevantLocationNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (id)relevantAddressNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (BOOL)locationIsInSupersetCategoryForLocationNode:(id)a0;
- (id)densestCloseLocationNodeFromLocationNode:(id)a0 withDateInterval:(id)a1 locationMask:(unsigned long long)a2;
- (id)commonLocationNodeForRelevantLocationNodes:(id)a0 locationMask:(unsigned long long)a1;
- (BOOL)_locationNodesRepresentSameCity:(id)a0;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)a0;
- (id)_commonNodeForLocationNode:(id)a0 andLocationNode:(id)a1;
- (struct CLLocationCoordinate2D { double x0; double x1; })_approximateCoordinateForLocationNode:(id)a0;
- (id)_validLocationNodeForLocationNode:(id)a0 withLocationMask:(unsigned long long)a1;
- (id)districtNodeFromAddressNode:(id)a0;
- (id)cityNodeFromAddressNode:(id)a0;
- (id)countryNodeFromAddressNode:(id)a0;
- (id)countyNodeFromCityNode:(id)a0;
- (id)countryAdjacency;
- (id)stateAdjacency;
- (id)countyAdjacency;
- (id)cityAdjacency;
- (id)districtAdjacency;
- (id)streetAdjacency;
- (id)numberAdjacency;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 ofLocationNode:(id)a1;

@end
