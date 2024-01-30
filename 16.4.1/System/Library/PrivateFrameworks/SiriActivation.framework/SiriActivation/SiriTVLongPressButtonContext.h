@class NSString;

@interface SiriTVLongPressButtonContext : SiriLongPressButtonContext

@property (nonatomic) BOOL isSourcePTTEligible;
@property (copy, nonatomic) NSString *activeDeviceBluetoothIdentifier;
@property (nonatomic) unsigned long long remoteType;
@property (nonatomic) BOOL isListening;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setSourcePTTEligibility:(BOOL)a0;
- (BOOL)isPTTEligible;
- (id)description;
- (void).cxx_destruct;

@end
