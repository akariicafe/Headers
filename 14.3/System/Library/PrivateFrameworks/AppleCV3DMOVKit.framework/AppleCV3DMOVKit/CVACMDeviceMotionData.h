@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property (nonatomic) double timestamp;

- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCMDeviceMotion:(id)a0;

@end
