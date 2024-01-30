@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long identifier;
@property unsigned long long metaIdentifier;
@property int dataType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
