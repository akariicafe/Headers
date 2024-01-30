@class NSUUID, NSArray, NSData, NSString;

@interface MNGuidanceEventFeedback : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uniqueID;
@property (retain, nonatomic) NSData *routeID;
@property (nonatomic) unsigned long long stepID;
@property (nonatomic) unsigned long long enrouteNoticeIndex;
@property (nonatomic) unsigned long long eventIndex;
@property (nonatomic) unsigned long long type;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double maneuverTime;
@property (nonatomic) double startDistance;
@property (nonatomic) double endDistance;
@property (nonatomic) double vehicleSpeed;
@property (nonatomic) unsigned long long trafficColor;
@property (nonatomic) unsigned long long selectedPrimaryStringIndex;
@property (nonatomic) unsigned long long selectedSecondaryStringIndex;
@property (retain, nonatomic) NSArray *junctionViewImageIDs;
@property (copy, nonatomic) NSString *enrouteNoticeIdentifier;
@property (nonatomic) int trafficCameraType;
@property (copy, nonatomic) NSString *eventDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
