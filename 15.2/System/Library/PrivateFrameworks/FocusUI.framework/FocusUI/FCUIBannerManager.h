@class NSString, NSMapTable, FCActivityManager, NSMutableArray;
@protocol FCActivityDescribing, BNPosting;

@interface FCUIBannerManager : NSObject <FCActivityManagerObserving, BNPresentableObserving> {
    FCActivityManager *_activityManager;
    NSMutableArray *_activeFlankingPresentables;
    NSMapTable *_flankingBannersToDismissTimers;
}

@property (readonly, nonatomic, getter=_bannerPoster) id<BNPosting> bannerPoster;
@property (retain, getter=_lastActiveActivity, setter=_setLastActiveActivity:) id<FCActivityDescribing> lastActiveActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_flankingBannerRequesterIdentifier;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void).cxx_destruct;
- (void)presentableDidAppearAsBanner:(id)a0;
- (id)initWithBannerPoster:(id)a0;
- (void)activeActivityDidChangeForManager:(id)a0;
- (void)_addActiveFlankingPresentable:(id)a0;
- (void)_scheduleDismissTimerForPresentable:(id)a0;
- (void)_removeFlankingPresentable:(id)a0;
- (void)_invalidateDismissTimerForPresentable:(id)a0;

@end
