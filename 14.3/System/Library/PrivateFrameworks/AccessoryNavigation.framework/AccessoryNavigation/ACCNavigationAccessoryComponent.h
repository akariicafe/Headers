@class NSString;

@interface ACCNavigationAccessoryComponent : NSObject

@property (nonatomic) unsigned long long identifier;
@property (retain) NSString *name;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) unsigned long long maxLength_CurrentRoadName;
@property (nonatomic) unsigned long long maxLength_DestinationRoadName;
@property (nonatomic) unsigned long long maxLength_PostManeuverRoadName;
@property (nonatomic) unsigned long long maxLength_ManeuverDescription;
@property (nonatomic) unsigned long long maxLength_LaneGuidanceDescription;
@property (nonatomic) BOOL requestSourceName;
@property (nonatomic) BOOL requestSourceSupportsRouteGuidance;
@property (nonatomic) BOOL supportsExitInfo;
@property (nonatomic) unsigned long long maxCapacity_GuidanceManeuver;
@property (nonatomic) unsigned long long maxCapacity_LaneGuidance;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
