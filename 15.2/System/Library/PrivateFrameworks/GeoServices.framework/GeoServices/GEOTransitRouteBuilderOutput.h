@class NSArray;

@interface GEOTransitRouteBuilderOutput : GEORouteBuilderOutput

@property (readonly, nonatomic) BOOL isWalkingOnlyRoute;
@property (readonly, nonatomic) NSArray *rideSelections;
@property (readonly, nonatomic) NSArray *sectionOptions;

- (void)setRideSelections:(id)a0;
- (void)setIsWalkingOnlyRoute:(BOOL)a0;
- (void).cxx_destruct;
- (void)setSectionOptions:(id)a0;

@end
