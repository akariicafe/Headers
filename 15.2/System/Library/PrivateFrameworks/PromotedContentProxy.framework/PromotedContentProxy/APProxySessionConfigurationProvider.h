@class NSArray, NSURL, APUnfairLock, NSURLSessionConfiguration;

@interface APProxySessionConfigurationProvider : NSObject {
    NSURLSessionConfiguration *_connectProxyConfig;
}

@property (retain, nonatomic) NSArray *protocolClasses;
@property (retain, nonatomic) NSURL *proxyURL;
@property (retain, nonatomic) NSURL *defaultProxyURL;
@property (readonly, nonatomic) APUnfairLock *lock;

- (id)_createConnectProxyConfig;
- (void)addProtocolClasses:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultProxyURL:(id)a0;
- (id)connectProxyConfig;

@end
