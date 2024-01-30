@class NSNumber;

@interface CMAltitudeData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) NSNumber *relativeAltitude;
@property (readonly, nonatomic) NSNumber *pressure;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAltitude:(float)a0 andTimestamp:(double)a1 atBaseAltitude:(float)a2;
- (id)initWithTimestamp:(double)a0 pressure:(float)a1 relativeAltitude:(float)a2;
- (void)encodeWithCoder:(id)a0;

@end
