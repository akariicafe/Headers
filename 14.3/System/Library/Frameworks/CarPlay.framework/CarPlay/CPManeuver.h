@class CPTravelEstimates, NSUUID, NSArray, NSMeasurement, NSSet, UIImage, CPImageSet;

@interface CPManeuver : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (nonatomic) unsigned long long maneuverType;
@property (copy, nonatomic) NSArray *roadFollowingManeuverVariants;
@property (nonatomic) unsigned long long trafficSide;
@property (nonatomic) unsigned long long junctionType;
@property (copy, nonatomic) NSMeasurement *junctionExitAngle;
@property (copy, nonatomic) NSSet *junctionElementAngles;
@property (readonly) NSArray *stringInstructionVariants;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) CPImageSet *junctionImageSet;
@property (retain, nonatomic) CPImageSet *dashboardSymbolImageSet;
@property (retain, nonatomic) CPImageSet *dashboardJunctionImageSet;
@property (retain, nonatomic) CPImageSet *notificationSymbolImageSet;
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

+ (id)_descriptionForManeuverType:(unsigned long long)a0;
+ (id)_descriptionForTrafficSide:(unsigned long long)a0;
+ (id)_descriptionForJunctionType:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
