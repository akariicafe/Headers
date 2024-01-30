@class NSDictionary, NSHTTPURLResponse, NSData;

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAuthorizationCredential:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
