@class NSString;

@interface CALNDefaultTravelAdvisoryAuthority : NSObject <CALNTravelAdvisoryAuthority>

@property (class, readonly, nonatomic) CALNDefaultTravelAdvisoryAuthority *sharedInstance;

@property (readonly, nonatomic) double minimumAllowableTravelTime;
@property (readonly, nonatomic) double maximumAllowableTravelTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)doesHypothesisSatisfyMinimumAllowableTravelTime:(id)a0;
- (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)a0;

@end
