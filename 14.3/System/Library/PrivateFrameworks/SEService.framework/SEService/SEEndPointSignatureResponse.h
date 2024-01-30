@class NSData;

@interface SEEndPointSignatureResponse : NSObject <NSSecureCoding, SESEndPointSignature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *signedData;
@property (retain, nonatomic) NSData *signature;

+ (id)responseWithSignedData:(id)a0 signature:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
