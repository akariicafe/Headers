@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MUTimeExpirableLRUCache, MUPlaceAppLockupView, GEOAppleMediaServicesResult, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUOfficialAppSectionController : MUPlaceSectionController <MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling> {
    MUPlaceAppLockupView *_officialAppView;
    MUPlaceSectionView *_sectionView;
    GEOAppleMediaServicesResult *_appStoreApp;
    MUTimeExpirableLRUCache *_cachedMediaResults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (void)_hydrateViewWithApp;
- (id)_sectionHeaderText;
- (void)_setupLockupView;
- (void)_updateViewWithMediaServicesResult:(id)a0;
- (int)analyticsModuleType;
- (void)appLockupViewDidSelectPunchOutButton:(id)a0;
- (id)initWithMapItem:(id)a0 usingCachedMediaResults:(id)a1;
- (BOOL)isImpressionable;

@end
