@class NSString, NSMutableArray, NSMapTable;
@protocol BNPosting;

@interface FCUIFocusEnablementIndicatorBannerManager : FCUIFocusEnablementIndicatorManager <FCActivityManagerObserving, BNPresentableObserving> {
    NSMutableArray *_activeFlankingPresentables;
    NSMapTable *_flankingBannersToDismissTimers;
}

@property (readonly, nonatomic, getter=_bannerPoster) id<BNPosting> bannerPoster;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_flankingBannerRequesterIdentifier;
+ (id)managerWithBannerPoster:(id)a0;

- (void)presentableDidDisappearAsBanner:(id)a0 withReason:(id)a1;
- (void)presentableDidAppearAsBanner:(id)a0;
- (void).cxx_destruct;
- (void)_addActivePresentable:(id)a0;
- (id)_initWithBannerPoster:(id)a0;
- (void)_invalidateDismissTimerForPresentable:(id)a0;
- (void)_removeFlankingPresentable:(id)a0;
- (void)_scheduleDismissTimerForPresentable:(id)a0;
- (void)postActivity:(id)a0 enabled:(BOOL)a1;
- (void)revokeWithReason:(id)a0;
- (BOOL)shouldKeepPresentingAfterActiveActivityDidChange:(id)a0 lastActivity:(id)a1;

@end
