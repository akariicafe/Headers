@class MUPlaceSectionView, _MKPlaceActionButtonController, MUPlaceSectionHeaderViewModel, UIViewController, UIView, MUHeaderButtonsView, NSString, MKETAProvider, MKUGCCallToActionViewAppearance, NSArray, MKPlaceHeaderButtonsViewController, MUPlaceSectionFooterViewModel, MUHeaderButtonsViewConfiguration;
@protocol MUHeaderButtonsSectionControllerDelegate, MUInfoCardAnalyticsDelegate;

@interface MUHeaderButtonsSectionController : NSObject <MKETAProviderObserver, MUHeaderButtonsViewDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MUPlaceSectionControlling> {
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
@property (readonly, nonatomic) NSArray *sectionViews;
@property (readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property (readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property (readonly, nonatomic) UIViewController *sectionViewController;

- (void).cxx_destruct;
- (void)placeHeaderButtonsViewController:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withView:(id)a2;
- (id)draggableContent;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)headerButtonsView:(id)a0 didSelectPrimaryType:(unsigned long long)a1 withPresentationOptions:(id)a2;
- (id)analyticsModule;
- (void)_setupSectionView;
- (void)_updateWithPreviousState:(BOOL)a0;
- (int)analyticsModuleType;
- (void)headerButtonsViewWillPresentMenu:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })impressionsFrame;
- (id)initWithETAProvider:(id)a0 headerButtonsConfiguration:(id)a1;
- (id)revealedAnalyticsModule;

@end
