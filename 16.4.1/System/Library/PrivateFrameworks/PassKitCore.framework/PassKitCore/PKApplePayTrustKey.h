@class NSString, NSData;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSData *signedEnrollmentData;
@property (readonly, copy, nonatomic) NSData *publicKeyHash;
@property (readonly, copy, nonatomic) NSData *certificate;

- (id)initWithKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
