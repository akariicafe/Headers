@class MNCommuteDestinationSuggestion, NSString, GEOLocation, NSDate, GEOComposedWaypoint;

@interface FakeBitsAndPieces : NSObject

@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double weight;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expires;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly) MNCommuteDestinationSuggestion *fakeSuggestion;

- (void).cxx_destruct;

@end
