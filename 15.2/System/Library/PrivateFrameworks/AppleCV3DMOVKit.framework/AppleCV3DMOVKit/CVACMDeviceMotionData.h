@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property (nonatomic) double timestamp;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (id)initWithCMDeviceMotion:(id)a0;

@end
