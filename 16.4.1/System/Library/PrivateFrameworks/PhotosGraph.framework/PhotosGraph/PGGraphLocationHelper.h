@class PGGraph, MABinaryAdjacency, PGGraphAddressNodeCollection;

@interface PGGraphLocationHelper : NSObject {
    PGGraph *_graph;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locationHelperLock;
    MABinaryAdjacency *_countryNodesByLocationNode;
    MABinaryAdjacency *_stateNodesByLocationNode;
    MABinaryAdjacency *_countyNodesByLocationNode;
    MABinaryAdjacency *_cityNodesByLocationNode;
    MABinaryAdjacency *_districtNodesByLocationNode;
    MABinaryAdjacency *_streetNodesByLocationNode;
    MABinaryAdjacency *_numberNodesByLocationNode;
    MABinaryAdjacency *_locationNodesByCountryNode;
    MABinaryAdjacency *_locationNodesByStateNode;
    MABinaryAdjacency *_locationNodesByCountyNode;
    MABinaryAdjacency *_locationNodesByCityNode;
    MABinaryAdjacency *_locationNodesByDistrictNode;
    MABinaryAdjacency *_locationNodesByStreetNode;
    MABinaryAdjacency *_locationNodesByNumberNode;
    MABinaryAdjacency *_addressNodesByAreaNode;
    MABinaryAdjacency *_momentNodesByAddressNode;
    PGGraphAddressNodeCollection *_addressNodes;
}

+ (id)inefficientLocationHelper;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (void)_fetchLocationNodesByNumberNode;
- (void)_fetchLocationNodesByCountyNode;
- (void)_fetchLocationNodesByStreetNode;
- (struct CLLocationCoordinate2D { double x0; double x1; })_approximateCoordinateForLocationNode:(id)a0;
- (id)_closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2 reverse:(BOOL)a3;
- (id)_commonNodeForLocationNode:(id)a0 andLocationNode:(id)a1;
- (void)_fetchAddressNodes;
- (void)_fetchLocationNodesByCityNode;
- (void)_fetchLocationNodesByCountryNode;
- (void)_fetchLocationNodesByDistrictNode;
- (void)_fetchLocationNodesByStateNode;
- (BOOL)_locationNodesRepresentSameCity:(id)a0;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)a0;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 ofLocationNode:(id)a1;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 ofLocationNodeAsCollection:(id)a1;
- (id)_parentLocationNodeWithDimension:(unsigned long long)a0 sourceLocationNodeAsCollection:(id)a1 sourceLabel:(id)a2;
- (id)_validLocationNodeForLocationNode:(id)a0 withLocationMask:(unsigned long long)a1;
- (id)addressNodes;
- (id)addressNodesByAreaNode;
- (id)addressNodesFromAreaNodes:(id)a0;
- (id)addressNodesFromLocationNodes:(id)a0;
- (id)cityNodeFromAddressNode:(id)a0;
- (id)cityNodesByLocationNode;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2;
- (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 reverse:(BOOL)a2;
- (id)commonLocationNodeForRelevantLocationNodes:(id)a0 locationMask:(unsigned long long)a1;
- (id)countryNodeFromAddressNode:(id)a0;
- (id)countryNodeFromAddressNodeAsCollection:(id)a0;
- (id)countryNodesByLocationNode;
- (id)countyNodeFromCityNode:(id)a0;
- (id)countyNodesByLocationNode;
- (id)densestCloseLocationNodeFromLocationNode:(id)a0 withDateInterval:(id)a1 locationMask:(unsigned long long)a2;
- (id)districtNodeFromAddressNode:(id)a0;
- (id)districtNodesByLocationNode;
- (BOOL)locationIsInSupersetCategoryForLocationNode:(id)a0;
- (id)locationNodesByCityNode;
- (id)locationNodesByCountryNode;
- (id)locationNodesByCountyNode;
- (id)locationNodesByDistrictNode;
- (id)locationNodesByNumberNode;
- (id)locationNodesByStateNode;
- (id)locationNodesByStreetNode;
- (id)momentNodesByAddressNode;
- (id)momentNodesByAddressNodeIntersectingAddressNodes:(id)a0;
- (id)numberNodesByLocationNode;
- (id)relevantAddressNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (id)relevantLocationNodesForMomentNodes:(id)a0 applyDensestCloseLocationNode:(BOOL)a1;
- (id)stateNodesByLocationNode;
- (id)streetNodesByLocationNode;

@end
