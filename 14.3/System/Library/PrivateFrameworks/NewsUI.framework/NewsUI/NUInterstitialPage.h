@class ADInterstitialAd, NSString;

@interface NUInterstitialPage : NSObject <ADInterstitialAdDelegate, NUPage>

@property (copy, nonatomic) id /* block */ unloadBlock;
@property (readonly, nonatomic) ADInterstitialAd *interstitial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL allowNeighboringAdvertising;

- (void)unprepare;
- (void)prepare;
- (void)interstitialAdDidLoad:(id)a0;
- (void).cxx_destruct;
- (id)viewController;
- (void)interstitialAdDidUnload:(id)a0;
- (void)interstitialAd:(id)a0 didFailWithError:(id)a1;
- (void)pageStyling:(id /* block */)a0;
- (unsigned long long)pageNextAction;
- (void)activityProvider:(id /* block */)a0;
- (id)initWithInterstitial:(id)a0;
- (void)onUnload:(id /* block */)a0;

@end
