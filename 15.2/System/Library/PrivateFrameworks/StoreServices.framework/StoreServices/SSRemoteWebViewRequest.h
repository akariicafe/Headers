@class NSString;

@interface SSRemoteWebViewRequest : SSRequest

@property (retain, nonatomic) NSString *referrer;
@property (retain, nonatomic) NSString *URLString;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
