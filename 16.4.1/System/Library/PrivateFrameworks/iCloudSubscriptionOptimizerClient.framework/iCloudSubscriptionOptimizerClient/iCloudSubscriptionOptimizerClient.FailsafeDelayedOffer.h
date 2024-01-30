@class NSString;

@interface iCloudSubscriptionOptimizerClient.FailsafeDelayedOffer : ISODelayedOffer

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (id)newOfferResponse;

@end
