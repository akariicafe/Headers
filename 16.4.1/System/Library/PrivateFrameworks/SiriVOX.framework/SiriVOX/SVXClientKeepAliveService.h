@class NSString;
@protocol SVXPerforming, SVXClientServiceProviding;

@interface SVXClientKeepAliveService : NSObject <SVXClientServiceConsuming, SVXClientKeepAliveServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_connectWithRetryCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)clientServiceDidChange:(BOOL)a0;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;

@end
