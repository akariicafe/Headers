@class NSArray, NSString, NSMeasurement, NSDate, CPLaneGuidance;

@interface CPRouteGuidance : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short componentID;
@property (copy, nonatomic) NSArray *currentManeuverIndexes;
@property (nonatomic) unsigned short currentLaneGuidanceIndex;
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
@property (nonatomic) unsigned int distanceRemainingToNextManeuver;
@property (retain, nonatomic) NSMeasurement *distanceRemainingToNextManeuverDisplay;
@property (copy, nonatomic) NSArray *currentManeuvers;
@property (nonatomic) unsigned short totalManeuverCount;
@property (nonatomic) BOOL beingShownInApp;
@property (retain, nonatomic) CPLaneGuidance *currentLaneGuidance;
@property (nonatomic) unsigned short totalLaneGuidanceCount;
@property (nonatomic) BOOL laneGuidanceShowing;
@property (copy, nonatomic) NSString *sourceName;
@property (nonatomic) BOOL sourceSupportsRouteGuidance;
@property (nonatomic) unsigned char destinationTimeZoneOffsetMinutes;


- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
