@class NSString, NSUUID;

@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPeerPaymentTransactionMetadata:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
