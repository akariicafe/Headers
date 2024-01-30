@class NSString;

@interface SSRemoteWebViewRequest : SSRequest

@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) NSString *URLString;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
