@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)dictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCMDeviceMotion:(id)a0;

@end
