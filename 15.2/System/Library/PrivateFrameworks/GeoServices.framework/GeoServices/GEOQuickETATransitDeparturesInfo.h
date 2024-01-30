@class NSString, NSDate;

@interface GEOQuickETATransitDeparturesInfo : NSObject

@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL departuresHaveFrequency;
@property (readonly, nonatomic) double departureFrequency;
@property (readonly, nonatomic) NSDate *departureFrequencyValidUntil;

- (id)_chooseMostImportantTransitLegInRoute:(id)a0;
- (id)initWithComposedRoute:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
