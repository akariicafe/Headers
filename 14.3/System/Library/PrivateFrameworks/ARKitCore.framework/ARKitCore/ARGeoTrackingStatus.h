@interface ARGeoTrackingStatus : NSObject <ARDaemonSecureCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long failureReasons;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long accuracy;
@property (readonly, nonatomic) long long stateReason;

+ (id)initialStatus;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualPrivate:(id)a0;
- (id)initWithGeoTrackingState:(long long)a0 accuracy:(long long)a1 stateReason:(long long)a2 failureReasons:(long long)a3;

@end
