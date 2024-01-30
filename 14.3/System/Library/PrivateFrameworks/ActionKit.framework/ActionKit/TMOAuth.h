@class NSString;

@interface TMOAuth : NSObject

@property (readonly, nonatomic) NSString *baseString;
@property (readonly, nonatomic) NSString *headerString;

+ (id)headerForURL:(id)a0 method:(id)a1 postParameters:(id)a2 nonce:(id)a3 consumerKey:(id)a4 consumerSecret:(id)a5 token:(id)a6 tokenSecret:(id)a7;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 method:(id)a1 postParameters:(id)a2 nonce:(id)a3 consumerKey:(id)a4 consumerSecret:(id)a5 token:(id)a6 tokenSecret:(id)a7;

@end
