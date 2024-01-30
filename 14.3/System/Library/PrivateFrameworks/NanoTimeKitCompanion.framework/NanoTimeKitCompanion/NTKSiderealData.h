@class NSOrderedSet, NSArray, CLKUIAlmanacTransitInfo, NSDate, CLLocation, NSData;

@interface NTKSiderealData : NSObject <NSSecureCoding> {
    float _altitudes[361];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *solarEvents;
@property (readonly, nonatomic) CLKUIAlmanacTransitInfo *sunriseSunsetInfo;
@property (readonly, nonatomic) NSOrderedSet *sectors;
@property (readonly, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) NSDate *referenceDate;
@property (readonly, nonatomic) CLLocation *referenceLocation;
@property (readonly, nonatomic) BOOL sunsetFollowsSunrise;
@property (readonly, nonatomic) BOOL isConstantSunUpOrDown;
@property (readonly, nonatomic) NSDate *sunsetTime;
@property (readonly, nonatomic) NSDate *sunriseTime;
@property (readonly, nonatomic) NSOrderedSet *daytimeEvents;
@property (readonly, nonatomic) NSData *gradientData;

+ (id)loadCached;

- (void).cxx_destruct;
- (void)save;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct { float x0; float x1; float x2; })altitudeForProgress:(double)a0;
- (id)interpolateBetweenCalendricalMidnights:(double)a0;
- (BOOL)isDateInReferenceDate:(id)a0;
- (id)_generateGradientDataForXR:(BOOL)a0;
- (id)_findSunsetTime;
- (id)_findSunriseTime;
- (BOOL)_computeSunsetFollowsSunrise;
- (BOOL)_computeIsConstantSunUpOrDown;
- (id)initWithReferenceDate:(id)a0 referenceLocation:(id)a1 sunriseSunsetInfo:(id)a2 solarEvents:(id)a3 daytimeEvents:(id)a4 sectors:(id)a5 waypoints:(id)a6 altitudes:(float *)a7 useXR:(BOOL)a8;

@end
