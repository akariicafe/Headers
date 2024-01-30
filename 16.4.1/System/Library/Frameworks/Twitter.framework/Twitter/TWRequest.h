@class NSURL, ACAccount, NSDictionary;

@interface TWRequest : NSObject

@property (retain, nonatomic) ACAccount *account;
@property (readonly, nonatomic) long long requestMethod;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSDictionary *parameters;

- (void)dealloc;
- (void)performRequestWithHandler:(id /* block */)a0;
- (id)initWithURL:(id)a0 parameters:(id)a1 requestMethod:(long long)a2;
- (void)addMultiPartData:(id)a0 withName:(id)a1 type:(id)a2;
- (id)signedURLRequest;

@end
