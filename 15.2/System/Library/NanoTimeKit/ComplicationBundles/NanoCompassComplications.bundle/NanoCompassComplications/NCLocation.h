@class NSError, NSDate, CLLocation;

@interface NCLocation : NSObject

@property (class, readonly, nonatomic) NCLocation *idealizedLocation;

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (nonatomic) double accuracy;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *reportedTimestamp;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) CLLocation *rawLocation;
@property (readonly, nonatomic) BOOL hasReading;

+ (id)locationWithLocation:(id)a0 error:(id)a1;
+ (id)randomizedLocation;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocation:(id)a0 error:(id)a1;
- (BOOL)hasAcceptibleAccuracy;
- (BOOL)isBetterThan:(id)a0;

@end
