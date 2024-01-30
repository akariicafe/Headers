@class NSString;

@interface iCloudSubscriptionOptimizerClient.NewOfferResponse : ISONewOfferResponse {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ serverError;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)error;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldDisplayOfferNow;
- (id)toContext;

@end
