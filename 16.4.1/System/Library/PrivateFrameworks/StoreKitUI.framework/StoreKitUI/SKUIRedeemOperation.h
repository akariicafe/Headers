@class NSString, SKUIClientContext;

@interface SKUIRedeemOperation : NSOperation {
    NSString *_code;
}

@property (nonatomic) BOOL cameraRecognized;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy) id /* block */ resultBlock;

- (void)main;
- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)initWithCode:(id)a0;
- (void)_applyThankYouDictionary:(id)a0 toRedeem:(id)a1;
- (id)_itemsForItemIdentifiers:(id)a0;
- (id)_performRequestWithProperties:(id)a0 error:(id *)a1;
- (id)_redeemForSuccessDictionary:(id)a0;
- (id)_requestPropertiesForThankYouWithURL:(id)a0;

@end
