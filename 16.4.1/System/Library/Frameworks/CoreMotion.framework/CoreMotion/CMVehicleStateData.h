@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject <NSSecureCoding, NSCopying> {
    CMMotionTimeRange *fTimeRange;
    NSString *fDeviceId;
    unsigned long long fVehicularState;
    unsigned long long fVehicularHints;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CMMotionTimeRange *timeRange;
@property (readonly, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) unsigned long long vehicularState;
@property (readonly, nonatomic) unsigned long long vehicularHints;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithTimeRange:(id)a0 deviceId:(id)a1;
- (id)initWithTimestamp:(id)a0 state:(unsigned long long)a1 hints:(unsigned long long)a2;

@end
