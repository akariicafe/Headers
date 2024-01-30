@class NSString, NSData;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *vettingToken;
@property (retain, nonatomic) NSString *vettingEmail;
@property (retain, nonatomic) NSString *vettingPhone;
@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *encryptedKey;
@property (retain, nonatomic) NSString *baseToken;
@property (retain, nonatomic) NSString *displayedHostname;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
