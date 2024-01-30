@class NSNumber;

@interface CMAbsoluteAltitudeData : CMLogItem {
    double _altitudePrivate;
}

@property (readonly, nonatomic) NSNumber *absoluteAltitude;
@property (readonly, nonatomic) double absoluteAltitudeAccuracy;
@property (readonly, nonatomic) double absoluteAltitudePrecision;
@property (readonly, nonatomic) long long absoluteAltitudeStatusInfo;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) double precision;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)setAltitudeData:(double)a0 accuracy:(double)a1 precision:(double)a2 status:(long long)a3;
- (id)initWithAltitude:(double)a0 accuracy:(double)a1 precision:(double)a2 status:(long long)a3 timestamp:(double)a4;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
