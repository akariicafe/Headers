@class MUPlaceSectionView, MUPlaceRatingAndSubmissionStatusRibbonViewModel, MUPlaceDistanceRibbonViewModel, MUPlaceSectionHeaderViewModel, UIViewController, GEOPlaceRibbonConfiguration, UIView, MUPlaceRibbonSectionControllerConfiguration, NSString, MKUGCCallToActionViewAppearance, NSArray, MUPlaceRibbonView, MUPlaceCallToActionRibbonViewModel, MUPlaceSectionFooterViewModel;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceRibbonSectionControllerDelegate;

@interface MUPlaceRibbonSectionController : MUPlaceSectionController <MUPlaceRibbonViewDelegate, MUScrollAnalyticActionObserving, MUPlaceSectionControlling> {
    MUPlaceRibbonView *_ribbonView;
    MUPlaceSectionView *_sectionView;
    MUPlaceRibbonSectionControllerConfiguration *_configuration;
    MUPlaceCallToActionRibbonViewModel *_arpViewModel;
    MUPlaceRatingAndSubmissionStatusRibbonViewModel *_arpViewModelSydney;
    MUPlaceRatingAndSubmissionStatusRibbonViewModel *_ratingViewModel;
    MUPlaceDistanceRibbonViewModel *_distanceViewModel;
}

@property (readonly, nonatomic) BOOL shouldShowARPCallToAction;
@property (readonly, nonatomic) BOOL isAllowedToShowRatingScoreRibbonItem;
@property (readonly, nonatomic) GEOPlaceRibbonConfiguration *ribbonConfig;
@property (weak, nonatomic) id<MUPlaceRibbonSectionControllerDelegate> ribbonDelegate;
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
- (BOOL)_supportsAddRatingsCallToAction;
- (void)_setupRibbonView;
- (BOOL)_shouldShowCallToActionRibbonItem;
- (BOOL)_shouldShowRatingsRibbonItem;
- (id)_submissionStatusForCallToAction;
- (id)_submissionStatusForRatings;
- (void)_updateAppearanceForSubmissionStatus;
- (void)_updateWithPreviousState:(BOOL)a0;
- (int)analyticsModuleType;
- (void)buildContent;
- (id)initWithMapItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (void)performInstrumentationForScrollLeft;
- (void)performInstrumentationForScrollRight;
- (void)ribbonView:(id)a0 didTapItemWithViewModel:(id)a1 withPresentationOptions:(id)a2;
- (BOOL)ribbonView:(id)a0 shouldShowRibbonItem:(id)a1;

@end
