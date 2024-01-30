@class NSString;

@interface IAPNavigationAccessoryComponent : NSObject

@property BOOL _enabledModified;
@property unsigned long long identifier;
@property (retain) NSString *name;
@property BOOL isEnabled;
@property unsigned long long maxLength_CurrentRoadName;
@property unsigned long long maxLength_DestinationRoadName;
@property unsigned long long maxLength_PostManeuverRoadName;
@property unsigned long long maxLength_ManeuverDescription;
@property unsigned long long maxCapacity_GuidanceManeuver;
@property BOOL requestSourceName;
@property BOOL requestSourceSupportsRouteGuidance;

- (id)initWithDict:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
