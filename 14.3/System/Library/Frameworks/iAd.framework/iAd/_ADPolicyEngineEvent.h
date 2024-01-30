@class NSArray, NSMutableArray, NSString;

@interface _ADPolicyEngineEvent : NSObject <ADBannerViewInternalDelegate>

@property (copy, nonatomic) id /* block */ bannersLoadedHandler;
@property (retain, nonatomic) NSMutableArray *banners;
@property (retain, nonatomic) NSMutableArray *bannersWaitingOnLoad;
@property (readonly, nonatomic) NSArray *bannerIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)bannerViewDidLoadAd:(id)a0;
- (void)_considerCallingLoadedHandler;
- (void)addBannerForCreativeType:(int)a0;
- (id)loadedBannerWithIdentifier:(id)a0;
- (void)waitForLoadsForBanners:(id)a0 completionHandler:(id /* block */)a1;

@end
