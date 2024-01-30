@class NSData, NSDictionary;

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *prePeerPaymentCertificate;
@property (readonly, retain, nonatomic) NSDictionary *certificate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
