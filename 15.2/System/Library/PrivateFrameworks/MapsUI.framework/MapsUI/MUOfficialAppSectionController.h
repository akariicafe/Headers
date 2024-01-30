@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, MUPlaceAppLockupView, GEOAppleMediaServicesResult, UIViewController, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUInfoCardAnalyticsDelegate;

@interface MUOfficialAppSectionController : MUPlaceSectionController <MUPlaceAppLockupViewDelegate, MUPlaceSectionControlling> {
    MUPlaceAppLockupView *_officialAppView;
    MUPlaceSectionView *_sectionView;
    GEOAppleMediaServicesResult *_appStoreApp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasContent;
@property (readonly, nonatomic) UIView *sectionView;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (id)initWithMapItem:(id)a0;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (int)analyticsModuleType;
- (void)appLockupViewDidSelectPunchOutButton:(id)a0;
- (void)_hydrateViewWithApp;
- (void)_setupLockupView;
- (id)_sectionHeaderText;

@end
