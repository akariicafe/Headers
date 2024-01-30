@class NSString, NSUUID;

@interface PKPeerPaymentTransactionMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=setDPANIdentifier:) NSString *dpanIdentifier;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (copy, nonatomic) NSUUID *requestDeviceScoreIdentifier;
@property (copy, nonatomic) NSUUID *sendDeviceScoreIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPeerPaymentTransactionMetadata:(id)a0;
- (unsigned long long)hash;

@end
