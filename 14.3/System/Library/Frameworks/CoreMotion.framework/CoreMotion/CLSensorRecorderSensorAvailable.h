@interface CLSensorRecorderSensorAvailable : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int dataType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
