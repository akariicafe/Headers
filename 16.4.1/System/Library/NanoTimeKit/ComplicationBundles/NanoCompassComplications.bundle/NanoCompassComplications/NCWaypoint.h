@class NSUUID, NSString, UIColor, NSDate, CLLocation;

@interface NCWaypoint : NSObject <NSSecureCoding> {
    NSString *_labelColorDescription;
}

@property (class, readonly, nonatomic) NCWaypoint *idealizedWaypoint;
@property (class, readonly, nonatomic) NCWaypoint *idealizedSmartWaypoint;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *timestampOfCreation;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) NSString *symbol;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic, getter=isParkedCar) BOOL parkedCar;
@property (nonatomic) double altitude;
@property (nonatomic, getter=isAltitudePopulated) BOOL altitudePopulated;

+ (id)idealizedWaypointSymbolColor;
+ (id)initWithCoreDataWaypoint:(id)a0;
+ (id)initWithLabel:(id)a0 withLocation:(id)a1 withAltitude:(id)a2 withColor:(id)a3 withSymbol:(id)a4 withType:(long long)a5 isEnabled:(BOOL)a6;
+ (id)initWithUUID:(id)a0 withLabel:(id)a1 withLocation:(id)a2 withColor:(id)a3 withSymbol:(id)a4 isEnabled:(BOOL)a5 withCreationTime:(id)a6;
+ (id)parkedCarLabel;
+ (id)parkedCarSymbolColor;
+ (id)randomizedWaypoint;
+ (id)sampleParkedCarWaypointWithLocation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initParkedCarWaypointWithUUID:(id)a0;
- (id)initSampleParkedCarWaypointWithLocation:(id)a0;
- (id)initWithCoreDataWaypoint:(id)a0;
- (id)initWithLabel:(id)a0 withLocation:(id)a1 withAltitude:(id)a2 withColor:(id)a3 withSymbol:(id)a4 withType:(long long)a5 isEnabled:(BOOL)a6;
- (id)initWithUUID:(id)a0 withLabel:(id)a1 withLocation:(id)a2 withColor:(id)a3 withSymbol:(id)a4 isEnabled:(BOOL)a5 withCreationTime:(id)a6;
- (id)initWithWaypoint:(id)a0;

@end
