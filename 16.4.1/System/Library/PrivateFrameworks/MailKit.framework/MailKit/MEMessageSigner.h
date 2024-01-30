@class NSArray, NSString, NSData;

@interface MEMessageSigner : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSData *context;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithEmailAddresses:(id)a0 signatureLabel:(id)a1 context:(id)a2;

@end
