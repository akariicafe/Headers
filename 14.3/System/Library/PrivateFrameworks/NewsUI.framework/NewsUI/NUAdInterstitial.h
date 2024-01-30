@class ADInterstitialAd, NSString;

@interface NUAdInterstitial : NSObject <ADInterstitialAdDelegate>

@property (retain, nonatomic) ADInterstitialAd *interstitial;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interstitialAdDidLoad:(id)a0;
- (void).cxx_destruct;
- (void)interstitialAdDidUnload:(id)a0;
- (void)interstitialAd:(id)a0 didFailWithError:(id)a1;
- (void)missedOpportunityToFill;
- (id)initWithContext:(id)a0 andCompletionBlock:(id /* block */)a1;

@end
