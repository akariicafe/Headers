@class NSNumber, NSDate;

@interface SPObservationLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (copy, nonatomic) NSNumber *floorLevel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAccuracy:(double)a3 altitude:(double)a4 verticalAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 course:(double)a8 courseAccuracy:(double)a9 floorLevel:(id)a10;
- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 horizontalAcuracy:(double)a3 altitude:(double)a4 verticalAccuracy:(double)a5 speed:(double)a6 speedAccuracy:(double)a7 course:(double)a8 courseAccuracy:(double)a9 floorLevel:(id)a10;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
