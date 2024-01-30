@class NSString;

@interface FMDPairingCheckCommandRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *pairingCheckToken;
@property (retain, nonatomic) NSString *authNonce;
@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSString *eraseKeyType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
