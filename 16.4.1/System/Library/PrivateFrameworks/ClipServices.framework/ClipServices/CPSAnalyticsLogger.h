@class NSObject;
@protocol OS_dispatch_queue;

@interface CPSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
}

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)didCancelInterstitialForClip:(id)a0 withEvent:(long long)a1 didShowCardInline:(BOOL)a2;
- (void)didPresentInvocationCardForClip:(id)a0 adamID:(id)a1 sourceBundleIdentifier:(id)a2 referrerBundleIdentifier:(id)a3 event:(id)a4 url:(id)a5 didShowCardInline:(BOOL)a6;
- (void)recordDidShowErrorWithBundleID:(id)a0 place:(id)a1 errorCode:(long long)a2;
- (void)recordDidShowLocationConsentWithBundleID:(id)a0 response:(unsigned long long)a1;
- (void)recordDidTapAppStoreBannerWithBundleID:(id)a0;
- (void)recordDidTapOpenButtonInCardWithBundleID:(id)a0 metadata:(id)a1 launchReason:(id)a2 launchOptions:(id)a3 didShowCardInline:(BOOL)a4;
- (void)_sendEventLazyWithName:(id)a0 clipBundleIdentifier:(id)a1 payload:(id)a2;
- (void)didAgeOutClip:(id)a0;
- (void)didDiscoverClip:(id)a0 event:(id)a1 alreadyInstalled:(BOOL)a2;
- (void)didManuallyDeleteClip:(id)a0 withEvent:(long long)a1;
- (void)didUpgradeToFullAppFromClip:(id)a0;
- (void)didUseClip:(id)a0 atLatitude:(double)a1 longitude:(double)a2;
- (void)recordClientClipRequestWithBundleID:(id)a0 launchReason:(id)a1;
- (void)recordClientMetadataRequestWithBundleID:(id)a0 launchReason:(id)a1;
- (void)recordDidActivateCardWithBundleID:(id)a0 launchReason:(id)a1 deviceLocked:(BOOL)a2 didShowCardInline:(BOOL)a3;
- (void)recordDidInstallWithBundleID:(id)a0 succeeded:(BOOL)a1;
- (void)recordDidOpenAppClipWithBundleID:(id)a0 launchReason:(id)a1 didShowCard:(BOOL)a2 didOpenFullApp:(BOOL)a3 didInstallAppClip:(BOOL)a4;
- (void)recordReportProblemStepCompletedWithBundleID:(id)a0 problemLabel:(id)a1 event:(long long)a2;

@end
