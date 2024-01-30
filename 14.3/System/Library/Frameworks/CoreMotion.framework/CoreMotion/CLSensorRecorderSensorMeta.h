@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long identifier;
@property double startTime;
@property unsigned long long timestamp;
@property unsigned long long dataIdentifier;
@property unsigned int offset;
@property unsigned int dataSize;
@property int dataType;
@property BOOL movement;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDataType:(int)a0;
- (void)encodeWithCoder:(id)a0;

@end
