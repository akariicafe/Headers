@class NSString, NSDate;

@interface GEOQuickETATransitDeparturesInfo : NSObject

@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL departuresHaveFrequency;
@property (readonly, nonatomic) double departureFrequency;
@property (readonly, nonatomic) NSDate *departureFrequencyValidUntil;

- (void).cxx_destruct;
- (id)description;
- (id)initWithComposedRoute:(id)a0;
- (id)_chooseMostImportantTransitLegInRoute:(id)a0;

@end
