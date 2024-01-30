@class ADInterstitialAd, NSString, UIView;
@protocol NULoadingDelegate;

@interface NUInterstitialViewController : UIViewController <NUPageable>

@property (readonly, nonatomic) ADInterstitialAd *interstitial;
@property (retain, nonatomic) UIView *interstitialView;
@property (nonatomic) BOOL hasPresentedInterstitial;
@property (readonly, copy, nonatomic) NSString *pageIdentifier;
@property (weak, nonatomic) id<NULoadingDelegate> loadingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithInterstitial:(id)a0 pageIdentifier:(id)a1;

@end
