@class NSString;

@interface MKHTTPProxyAuthorization : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *signature;

- (void).cxx_destruct;
- (id)initWithHeaderValue:(id)a0;

@end
