@class NSData, NSString, ADBannerView, NSURL, ADInterstitialAd, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface ADPolicyEngine : NSObject <ADBannerViewInternalDelegate, ADInterstitialAdDelegate>

@property (nonatomic) double nextInterstitialPresentationTime;
@property (nonatomic) double nextPrerollPlaybackTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *policyEngineQueue;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL canAutoEnable;
@property (retain, nonatomic) ADInterstitialAd *sharedInterstitialAd;
@property (nonatomic) BOOL sharedInterstitialAdIsInUse;
@property (copy, nonatomic) NSString *sharedInterstitialSection;
@property (copy, nonatomic) NSURL *sharedInterstitialServerURL;
@property (copy, nonatomic) NSString *sharedInterstitialAuthenticationUserName;
@property (retain, nonatomic) ADBannerView *sharedMediaPlayerVideoAd;
@property (nonatomic) BOOL sharedMediaPlayerVideoAdClaimed;
@property (retain, nonatomic) NSError *lastSharedMediaPlayerVideoAdError;
@property (retain, nonatomic) NSData *currentStationData;
@property (retain, nonatomic) NSData *currentSongData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEngine;

- (void)disablePolicyEngine;
- (void)interstitialAdDidLoad:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)claimSharedMediaPlayerVideoAdWithError:(id *)a0;
- (void)bannerViewActionDidFinish:(id)a0;
- (void)bannerViewWillLoadAd:(id)a0;
- (BOOL)canPresentSharedInterstitialAdWithResultMessage:(id *)a0;
- (BOOL)bannerViewActionShouldBegin:(id)a0 willLeaveApplication:(BOOL)a1;
- (void)enablePolicyEngine;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)finishedPresentingSharedInterstitialAd;
- (void)sharedMediaPlayerVideoAdDidFailToReceiveAdWithError:(id)a0;
- (void)interstitialAdDidUnload:(id)a0;
- (void)sharedMediaPlayerVideoAdDidLoad;
- (void)bannerViewDidLoadAd:(id)a0;
- (void)relinquishSharedMediaPlayerVideoAd;
- (void)_enablePolicyEngineWithReason:(id)a0;
- (void)interstitialAd:(id)a0 didFailWithError:(id)a1;
- (void)sharedMediaPlayerVideoAdActionDidFinish;
- (void)sharedMediaPlayerVideoAdWillLoad;
- (void)adServingDaemonDidIdleDisablePolicyEngine;

@end
