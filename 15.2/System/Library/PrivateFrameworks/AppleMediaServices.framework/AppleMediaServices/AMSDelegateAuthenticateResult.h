@class AMSDelegateAuthenticateRequest, NSDictionary, NSString;

@interface AMSDelegateAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSDelegateAuthenticateRequest *request;
@property (readonly, nonatomic) NSDictionary *serverResponse;
@property (readonly, nonatomic) NSString *token;

- (id)initWithServerResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
