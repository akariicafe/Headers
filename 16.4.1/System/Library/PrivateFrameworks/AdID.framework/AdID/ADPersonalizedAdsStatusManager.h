@class NSNumber;

@interface ADPersonalizedAdsStatusManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken;
@property (nonatomic) BOOL sendingPersonalizedAdsToAdPlatforms;

+ (id)sharedInstance;

- (void)sendPersonalizedAdsStatusToAdPlatforms:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
