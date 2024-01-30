@class NSString;

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
