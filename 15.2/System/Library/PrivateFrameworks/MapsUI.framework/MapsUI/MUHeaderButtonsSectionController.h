@class UIView, MUPlaceSectionFooterViewModel, NSString, MUPlaceSectionHeaderViewModel, _MKPlaceActionButtonController, MKETAProvider, MUHeaderButtonsViewConfiguration, MKPlaceHeaderButtonsViewController, UIViewController, MUHeaderButtonsView, MUPlaceSectionView, MKUGCCallToActionViewAppearance;
@protocol MUHeaderButtonsSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUHeaderButtonsSectionController : NSObject <MKETAProviderObserver, MUPlaceHeaderButtonsViewControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MUPlaceSectionControlling> {
    MKETAProvider *_etaProvider;
    MUHeaderButtonsViewConfiguration *_headerConfiguration;
    MUHeaderButtonsView *_headerButtonsView;
    MUPlaceSectionView *_sectionView;
    MKPlaceHeaderButtonsViewController *_catalystHeaderViewController;
    UIView *_contentView;
}

@property (weak, nonatomic) id<MUHeaderButtonsSectionControllerDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
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

- (void)placeHeaderButtonsViewController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withView:(id)a2;
- (void).cxx_destruct;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)draggableContent;
- (id)analyticsModule;
- (int)analyticsModuleType;
- (void)_setupSectionView;
- (void)placeHeaderButtonsViewController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withPresentationOptions:(id)a2;
- (void)headerButtonsViewWillPresentMenu:(id)a0;
- (void)_updateWithPreviousState:(BOOL)a0;
- (id)initWithETAProvider:(id)a0 headerButtonsConfiguration:(id)a1;

@end
