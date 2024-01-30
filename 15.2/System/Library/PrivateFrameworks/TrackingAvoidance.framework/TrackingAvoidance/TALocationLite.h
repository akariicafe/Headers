@class NSString, NSDate;

@interface TALocationLite : NSObject <TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;
@property (readonly, nonatomic) double deltaDistance;
@property (readonly, nonatomic) double deltaDistanceAccuracy;
@property (readonly, nonatomic) double groundAltitude;
@property (readonly, nonatomic) double groundAltitudeUncertainty;
@property (readonly, nonatomic) double pressure;
@property (readonly, nonatomic) double pressureUncertainty;
@property (readonly, nonatomic) BOOL isSimulatedOrSpoofed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct { double x0; double x1; double x2; })estimateSpeedFrom:(id)a0 to:(id)a1;
+ (BOOL)distanceFromLocation:(id)a0 toLocation:(id)a1 satisfyNSigma:(unsigned long long)a2 satisfyMinDistance:(double)a3;
+ (double)residualDistanceFromLocation:(id)a0 toLocation:(id)a1 nSigma:(unsigned long long)a2;

- (id)descriptionDictionary;
- (id)getDate;
- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (double)distanceFromLocation:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)distanceToLocation:(id)a0 satisfyNSigma:(unsigned long long)a1 satisfyMinDistance:(double)a2;
- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 altitude:(double)a4 verticalAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 course:(double)a8 courseAccuracy:(double)a9 deltaDistance:(double)a10 deltaDistanceAccuracy:(double)a11 groundAltitude:(double)a12 groundAltitudeUncertainty:(double)a13 pressure:(double)a14 pressureUncertainty:(double)a15 isSimulatedOrSpoofed:(BOOL)a16;

@end
