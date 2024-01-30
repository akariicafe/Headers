@class NSUUID, NSString, NSArray, CPImageSet, CPLaneGuidance, NSSet, UIImage, CPTravelEstimates, NSMeasurement;

@interface CPManeuver : NSObject <CPAccNavPrimaryUpdateProtocol, NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *accNavParameters;
@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short componentID;
@property (retain, nonatomic) NSMeasurement *initialDistance;
@property (retain, nonatomic) NSMeasurement *initialDistanceDisplay;
@property (nonatomic) unsigned short linkedLaneGuidanceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSArray *stringInstructionVariants;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) CPImageSet *junctionImageSet;
@property (retain, nonatomic) CPImageSet *dashboardSymbolImageSet;
@property (retain, nonatomic) CPImageSet *dashboardJunctionImageSet;
@property (retain, nonatomic) CPImageSet *notificationSymbolImageSet;
@property (nonatomic) unsigned short componentID;
@property (nonatomic) unsigned short linkedLaneGuidanceIndex;
@property (nonatomic) unsigned short index;
@property (nonatomic) unsigned char maneuverType;
@property (copy, nonatomic) NSArray *roadFollowingManeuverVariants;
@property (nonatomic) unsigned char trafficSide;
@property (nonatomic) unsigned char junctionType;
@property (copy, nonatomic) NSMeasurement *junctionExitAngle;
@property (copy, nonatomic) NSSet *junctionElementAngles;
@property (nonatomic) CPLaneGuidance *linkedLaneGuidance;
@property (copy) NSString *exitInfo;
@property (retain, nonatomic) CPImageSet *symbolSet;
@property (retain, nonatomic) UIImage *symbolImage;
@property (retain, nonatomic) UIImage *junctionImage;
@property (copy, nonatomic) NSArray *instructionVariants;
@property (retain, nonatomic) CPTravelEstimates *initialTravelEstimates;
@property (copy, nonatomic) NSArray *attributedInstructionVariants;
@property (retain, nonatomic) UIImage *dashboardSymbolImage;
@property (retain, nonatomic) UIImage *dashboardJunctionImage;
@property (copy, nonatomic) NSArray *dashboardInstructionVariants;
@property (copy, nonatomic) NSArray *dashboardAttributedInstructionVariants;
@property (retain, nonatomic) UIImage *notificationSymbolImage;
@property (copy, nonatomic) NSArray *notificationInstructionVariants;
@property (copy, nonatomic) NSArray *notificationAttributedInstructionVariants;
@property (retain, nonatomic) id userInfo;

+ (id)_descriptionForManeuverType:(unsigned char)a0;
+ (id)_descriptionForTrafficSide:(unsigned char)a0;
+ (id)_descriptionForJunctionType:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
