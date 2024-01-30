@class CLBeaconInternal, NSUUID, NSDate, NSNumber;

@interface CLBeacon : NSObject <NSCopying, NSSecureCoding> {
    CLBeaconInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSUUID *proximityUUID;
@property (readonly, copy, nonatomic) NSNumber *major;
@property (readonly, copy, nonatomic) NSNumber *minor;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) double accuracy;
@property (readonly, nonatomic) long long rssi;

- (id)initWithUUID:(id)a0 major:(id)a1 minor:(id)a2 proximity:(long long)a3 accuracy:(double)a4 rssi:(long long)a5 timestamp:(double)a6;
- (void)setReferenceFrame:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProximityUUID:(id)a0 major:(id)a1 minor:(id)a2 proximity:(long long)a3 accuracy:(double)a4 rssi:(long long)a5;
- (int)referenceFrame;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
