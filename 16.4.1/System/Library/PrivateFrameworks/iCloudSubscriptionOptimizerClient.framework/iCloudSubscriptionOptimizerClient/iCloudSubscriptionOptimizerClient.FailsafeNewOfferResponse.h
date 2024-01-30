@class NSString;

@interface iCloudSubscriptionOptimizerClient.FailsafeNewOfferResponse : ISONewOfferResponse

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)error;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldDisplayOfferNow;
- (id)toContext;

@end
