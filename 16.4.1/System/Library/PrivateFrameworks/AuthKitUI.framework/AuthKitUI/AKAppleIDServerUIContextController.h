@class AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, NSHTTPURLResponse, NSURL, AKServerRequestConfiguration;

@interface AKAppleIDServerUIContextController : NSObject {
    id /* block */ _serverUICompletion;
    NSHTTPURLResponse *_latestReadResponse;
    AKServerRequestConfiguration *_configuration;
}

@property (readonly, nonatomic) AKAppleIDServerResourceLoadDelegate *serverUIDelegate;
@property (readonly, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester;
@property (readonly, copy, nonatomic) NSURL *initiatingURL;

- (void)signRequest:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)processResponse:(id)a0;
- (void).cxx_destruct;
- (void)completeWithError:(id)a0;
- (void)tearDownContext;
- (void)_completeWithResponse:(id)a0 additionalData:(id)a1 error:(id)a2;
- (id)_headerValueFromType:(unsigned long long)a0;
- (void)completeWithError:(id)a0 additionalData:(id)a1;
- (void)completeWithFinalResponse:(id)a0;
- (BOOL)handleAuthKitActionAttribute:(id)a0;
- (id)initWithRequestConfiguration:(id)a0 completion:(id /* block */)a1;

@end
