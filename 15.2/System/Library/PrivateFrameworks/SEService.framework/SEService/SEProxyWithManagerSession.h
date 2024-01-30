@class NSString, NFSecureElementManagerSession;

@interface SEProxyWithManagerSession : NSObject <SEProxyInterface> {
    NFSecureElementManagerSession *_session;
    NSString *_seid;
}

- (void).cxx_destruct;
- (oneway void)transceive:(id)a0 callback:(id /* block */)a1;

@end
