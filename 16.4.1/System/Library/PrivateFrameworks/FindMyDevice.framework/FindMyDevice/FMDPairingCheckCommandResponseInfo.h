@class NSString;

@interface FMDPairingCheckCommandResponseInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSString *serverNonce;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *statusCode;
@property (retain, nonatomic) NSString *lostModeInfo;
@property (retain, nonatomic) NSString *useEraseKeyType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
