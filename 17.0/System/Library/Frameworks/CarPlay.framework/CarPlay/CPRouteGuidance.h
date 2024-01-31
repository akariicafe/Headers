@class NSArray, NSDictionary, NSString, NSDate, NSMeasurement, CPLaneGuidance;

@interface CPRouteGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, CRAccNavInfoProviding, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly, nonatomic) NSDictionary *accNavParametersIndexed;
@property (class, readonly, nonatomic) NSDictionary *accNavParameterKeysIndexed;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *currentManeuverIndexes;
@property (nonatomic) unsigned short currentLaneGuidanceIndex;
@property (nonatomic) unsigned short componentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned short componentID;
@property (copy, nonatomic) NSArray *currentManeuverIndexes;
@property (nonatomic) unsigned short currentLaneGuidanceIndex;
@property (nonatomic) unsigned char guidanceState;
@property (nonatomic) unsigned char maneuverState;
@property (copy, nonatomic) NSArray *currentRoadNameVariants;
@property (copy, nonatomic) NSArray *destinationNameVariants;
@property (retain, nonatomic) NSDate *estimatedTimeOfArrival;
@property (nonatomic) double timeRemaining;
@property (retain, nonatomic) NSMeasurement *distanceRemaining;
@property (retain, nonatomic) NSMeasurement *distanceRemainingDisplay;
@property (retain, nonatomic) NSMeasurement *distanceRemainingToNextManeuver;
@property (retain, nonatomic) NSMeasurement *distanceRemainingToNextManeuverDisplay;
@property (copy, nonatomic) NSArray *currentManeuvers;
@property (nonatomic) unsigned short totalManeuverCount;
@property (nonatomic) BOOL beingShownInApp;
@property (retain, nonatomic) CPLaneGuidance *currentLaneGuidance;
@property (nonatomic) unsigned short totalLaneGuidanceCount;
@property (nonatomic) BOOL laneGuidanceShowing;
@property (copy, nonatomic) NSString *sourceName;
@property (nonatomic) BOOL sourceSupportsRouteGuidance;
@property (nonatomic) short destinationTimeZoneOffsetMinutes;


- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearValueForKey:(id)a0;
- (id)navInfoWithComponent:(id)a0;
- (id)routeGuidanceWithComponent:(id)a0;

@end
