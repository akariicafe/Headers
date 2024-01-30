@class NSString, NUAdBannerView;

@interface NUAdPreroll : NSObject <ADBannerViewDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NUAdBannerView *bannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)timeout;
- (void).cxx_destruct;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)bannerViewDidLoadAd:(id)a0;
- (id)initWithContext:(id)a0 timeout:(double)a1 completionBlock:(id /* block */)a2;
- (void)finishedLoadingBannerView:(id)a0 error:(id)a1;

@end
