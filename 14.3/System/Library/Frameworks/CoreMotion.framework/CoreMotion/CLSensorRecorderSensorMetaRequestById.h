@interface CLSensorRecorderSensorMetaRequestById : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long identifier;
@property int dataType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
