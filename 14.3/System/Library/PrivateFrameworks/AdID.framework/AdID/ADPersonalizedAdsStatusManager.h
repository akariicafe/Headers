@class NSNumber;

@interface ADPersonalizedAdsStatusManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken;
@property (nonatomic) BOOL sendingPersonalizedAdsToAdPlatforms;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)sendPersonalizedAdsStatusToAdPlatforms:(id)a0 completionHandler:(id /* block */)a1;

@end
