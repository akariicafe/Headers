@class NSString, NSNumber, NSDate;

@interface SPSecureLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *findMyId;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double course;
@property (nonatomic) double altitude;
@property (copy, nonatomic) NSNumber *floor;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) long long motionActivityState;
@property (nonatomic) long long publishReason;
@property (copy, nonatomic) NSString *locationLabel;

+ (id)_stringFromPublishReason:(long long)a0;
+ (id)_stringFromMotionState:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
