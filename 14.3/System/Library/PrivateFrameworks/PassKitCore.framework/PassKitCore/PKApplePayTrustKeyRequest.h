@class NSString, NSData;

@interface PKApplePayTrustKeyRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSData *subjectIdentifier;

- (void).cxx_destruct;
- (id)initWithKeyIdentifier:(id)a0 subjectIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
