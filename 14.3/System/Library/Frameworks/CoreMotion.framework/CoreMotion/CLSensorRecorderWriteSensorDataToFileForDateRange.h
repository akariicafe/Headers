@interface CLSensorRecorderWriteSensorDataToFileForDateRange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double startTime;
@property double endTime;
@property int dataType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
