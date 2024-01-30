@class PGGraphLocationStateNodeCollection, PGGraphLocationNumberNodeCollection, PGGraphLocationStreetNodeCollection, PGGraphLanguageNodeCollection, PGGraphLocationDistrictNodeCollection, CLLocation, PGGraphMomentNodeCollection, PGGraphLocationCountyNodeCollection, NSSet, PGGraphLocationCountryNodeCollection, NSString, PGGraphAreaNodeCollection, PGGraphHomeWorkNodeCollection, PGGraphLocationCityNodeCollection, NSArray, PGGraphFeatureNodeCollection;

@interface PGGraphAddressNodeCollection : PGGraphLocationNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (readonly) NSSet *uuids;
@property (readonly, nonatomic) PGGraphAddressNodeCollection *preciseSubset;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *momentNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *workNodes;
@property (readonly, nonatomic) PGGraphHomeWorkNodeCollection *homeWorkNodes;
@property (readonly, nonatomic) PGGraphLocationNumberNodeCollection *numberNodes;
@property (readonly, nonatomic) PGGraphLocationStreetNodeCollection *streetNodes;
@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *districtNodes;
@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *cityNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *countyNodes;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *stateNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *countryNodes;
@property (readonly, nonatomic) PGGraphLanguageNodeCollection *languageNodes;
@property (readonly, nonatomic) PGGraphAreaNodeCollection *areaNodes;
@property (readonly, nonatomic) NSArray *locations;
@property (readonly, nonatomic) CLLocation *centroidLocation;
@property (readonly, nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centroidCoordinate;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;
+ (id)addressNodeAsCollectionForUUID:(id)a0 inGraph:(id)a1;
+ (id)addressNodesForUUIDs:(id)a0 inGraph:(id)a1;
+ (id)addressNodesWithinDistance:(double)a0 ofLocations:(id)a1 inGraph:(id)a2;

- (id)addressNodes;
- (void)enumerateLatitudesUsingBlock:(id /* block */)a0;
- (void)enumerateLongitudesUsingBlock:(id /* block */)a0;

@end
