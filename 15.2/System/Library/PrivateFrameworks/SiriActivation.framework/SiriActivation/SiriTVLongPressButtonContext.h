@class NSString;

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier;
@property (nonatomic) unsigned long long remoteType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
