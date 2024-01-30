@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *primaryJSBLSequenceCounter;
@property (copy, nonatomic) NSString *secureElementIdentifier;
@property (nonatomic) BOOL devSigned;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
