@class NSNumber;

@interface CMAbsoluteAltitudeData : CMLogItem {
    double _altitude;
}

@property (readonly, nonatomic) NSNumber *absoluteAltitude;
@property (readonly, nonatomic) double absoluteAltitudeAccuracy;
@property (readonly, nonatomic) double absoluteAltitudePrecision;
@property (readonly, nonatomic) long long absoluteAltitudeStatusInfo;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)setAltitudeData:(double)a0 accuracy:(double)a1 precision:(double)a2 andStatus:(long long)a3;
- (id)initWithAltitude:(double)a0 accuracy:(double)a1 precision:(double)a2 status:(long long)a3 timestamp:(double)a4;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
