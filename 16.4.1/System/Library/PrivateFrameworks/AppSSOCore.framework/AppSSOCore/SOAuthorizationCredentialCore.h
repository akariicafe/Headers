@class NSHTTPURLResponse, NSDictionary, NSData, NSArray;

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSArray *secKeyProxyEndpoints;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAuthorizationCredential:(id)a0;

@end
