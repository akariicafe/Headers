@class UIView, MUPlaceSectionFooterViewModel, NSString, NSArray, MUPlaceSectionHeaderViewModel, MKUGCCallToActionViewAppearance, MUPlaceHeaderButtonsSectionControllerConfiguration, UIViewController, MUHeaderButtonsSectionController, _MKPlaceActionButtonController;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceHeaderButtonsSectionControllerDelegate, _MKPlaceItem;

@interface MUPlaceHeaderButtonsSectionController : MUPlaceSectionController <MKETAProviderObserver, MUHeaderButtonsSectionControllerDelegate, MUPlaceSectionControlling> {
    MUHeaderButtonsSectionController *_headerSectionController;
    MUPlaceHeaderButtonsSectionControllerConfiguration *_configuration;
}

@property (weak, nonatomic) id<MUPlaceHeaderButtonsSectionControllerDelegate> headerDelegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
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
- (id)infoCardChildUnactionableUIElements;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (void)headerButtonsSectionController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withPresentationOptions:(id)a2;
- (void)headerButtonsSectionControllerDidUpdateContent:(id)a0;
- (void)headerButtonsSectionControllerWillPresentMenu:(id)a0;
- (id)initWithPlaceItem:(id)a0 configuration:(id)a1;
- (BOOL)isImpressionable;
- (id)revealedAnalyticsModule;

@end
