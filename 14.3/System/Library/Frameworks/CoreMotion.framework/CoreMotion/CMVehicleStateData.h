@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {
    CMMotionTimeRange *fTimeRange;
    NSString *fDeviceId;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CMMotionTimeRange *timeRange;
@property (readonly, nonatomic) NSString *deviceId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithTimeRange:(id)a0 deviceId:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
