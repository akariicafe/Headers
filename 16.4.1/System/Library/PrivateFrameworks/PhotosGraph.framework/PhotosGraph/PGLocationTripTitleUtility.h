@class PGGraphLocationHelper, NSSet, NSString, NSArray, PGIncompleteLocationResolver;

@interface PGLocationTripTitleUtility : NSObject {
    PGGraphLocationHelper *_locationHelper;
}

@property (retain, nonatomic) NSSet *momentNodes;
@property (nonatomic) BOOL filterMomentsAndCities;
@property (nonatomic) BOOL allowLongAOI;
@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *usedLocationNodes;
@property (retain, nonatomic) NSSet *filteredLocationNodes;
@property (retain, nonatomic) NSArray *usedTitleComponents;
@property (readonly, nonatomic) unsigned long long tripTitleType;
@property (readonly, nonatomic) unsigned long long tripTitleLocationType;

+ (void)_aoiTitleWithLocationNodes:(id)a0 momentNodes:(id)a1 allowLongAOI:(BOOL)a2 graph:(id)a3 locationHelper:(id)a4 result:(id /* block */)a5;
+ (void)_cityStateAndCountryNodesForLocationNodes:(id)a0 result:(id /* block */)a1;
+ (id)_filteredCityNodesByNameForCityNodes:(id)a0;
+ (BOOL)_visitedLocations:(id)a0 onlyDuringMoments:(id)a1 locationHelper:(id)a2;

- (void).cxx_destruct;
- (void)_resolveMomentNodes:(id)a0 withResult:(id /* block */)a1;
- (id)_bestAddressNodeForCityNodes:(id)a0 inMomentNodes:(id)a1;
- (id)_cityNodesFromMomentNodes:(id)a0;
- (void)_cityTitleWithCityNode:(id)a0 countryNode:(id)a1 visitedCountryOnlyOnce:(BOOL)a2 momentNodes:(id)a3 result:(id /* block */)a4;
- (void)_generateLocationTitle;
- (void)_generateTitleForMomentNodes:(id)a0 resolvedMomentNodes:(id)a1 resolvedLocations:(id)a2;
- (id)_locationTitleWithLocationNode:(id)a0 addressNode:(id)a1 countryNode:(id)a2 allowSecondPart:(BOOL)a3;
- (id)initWithMomentNodes:(id)a0 filterMomentsAndCities:(BOOL)a1 allowLongAOI:(BOOL)a2 locationHelper:(id)a3;
- (id)initWithMomentNodes:(id)a0 filterMomentsAndCities:(BOOL)a1 locationHelper:(id)a2;

@end
