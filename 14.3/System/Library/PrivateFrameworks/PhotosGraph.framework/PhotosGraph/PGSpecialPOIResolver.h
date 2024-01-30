@class NSArray, NSMutableDictionary;

@interface PGSpecialPOIResolver : NSObject

@property (readonly, nonatomic) NSArray *momentNodes;
@property (retain, nonatomic) NSMutableDictionary *countBySpecialPOI;

+ (BOOL)specialPOINameIsInString:(id)a0;
+ (id)_regionsBySpecialPOI;
+ (id)_nameBySpecialPOI;
+ (BOOL)specialPOIContainsCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (unsigned long long)specialPOIsWithNameInString:(id)a0;
+ (unsigned long long)specialPOIsContainingCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

- (unsigned long long)_numberOfMomentsMatchingSpecialPOI:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)specialPOIsWithMomentRatio:(double)a0;
- (BOOL)anyMomentContainsSpecialPOI:(unsigned long long)a0;
- (id)initWithMomentNodes:(id)a0;
- (unsigned long long)specialPOIsInAnyMoment;
- (BOOL)momentsContainSpecialPOI:(unsigned long long)a0 withMomentRatio:(double)a1;
- (BOOL)anyMomentHasPOIAmusementPark;
- (unsigned long long)_numberOfMomentsInRegions:(id)a0 containingAOIName:(id)a1;

@end
