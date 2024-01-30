@class NSHTTPURLResponse, NSDictionary, NSData, NSArray;

@interface SOAuthorizationCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSArray *secKeyProxyEndpoints;

- (id)initWithAuthorizationResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
