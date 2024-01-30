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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLocation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)hasAcceptibleAccuracy;
- (id)initWithLocation:(id)a0 error:(id)a1;
- (BOOL)isBetterThan:(id)a0 withStaleTimeThreshold:(double)a1;

@end
