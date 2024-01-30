@class AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, NSHTTPURLResponse, NSURL, AKServerRequestConfiguration;

@interface AKAppleIDServerUIContextController : NSObject {
    id /* block */ _serverUICompletion;
    NSHTTPURLResponse *_latestReadResponse;
    AKServerRequestConfiguration *_configuration;
}

@property (readonly, nonatomic) AKAppleIDServerResourceLoadDelegate *serverUIDelegate;
@property (readonly, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (readonly, copy, nonatomic) NSURL *initiatingURL;

- (void).cxx_destruct;
- (void)processResponse:(id)a0;
- (void)completeWithError:(id)a0;
- (void)signRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)completeWithFinalResponse:(id)a0;
- (id)_headerValueFromType:(unsigned long long)a0;
- (void)_completeWithResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (void)tearDownContext;
- (id)initWithRequestConfiguration:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleAuthKitActionAttribute:(id)a0;
- (void)completeWithError:(id)a0 additionalData:(id)a1;

@end
