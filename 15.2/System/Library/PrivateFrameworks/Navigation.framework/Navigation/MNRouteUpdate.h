@class NSArray, NSString, CLLocation, NSDate;

@interface MNRouteUpdate : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *origin;
@property (nonatomic) double travelTime;
@property (nonatomic) double aggressiveTravelTime;
@property (nonatomic) double conservativeTravelTime;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSArray *nonRecommendedRoutes;
@property (copy, nonatomic) NSString *routeSummary;
@property (copy, nonatomic) NSString *longRouteSummary;
@property (nonatomic) long long travelMode;
@property (retain, nonatomic) NSDate *requestTime;
@property (copy, nonatomic) NSString *requestingClientID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithOptions:(long long)a0;
- (BOOL)satisfiesOptions:(long long)a0;
- (BOOL)satisfiesFreshness:(id)a0 fromLocation:(id)a1;

@end
