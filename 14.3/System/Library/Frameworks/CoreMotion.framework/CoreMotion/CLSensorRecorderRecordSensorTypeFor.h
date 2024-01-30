@interface CLSensorRecorderRecordSensorTypeFor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double duration;
@property int dataType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
