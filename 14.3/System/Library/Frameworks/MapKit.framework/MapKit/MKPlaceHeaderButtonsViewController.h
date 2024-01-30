@class NSMutableAttributedString, NSString, NSArray, MKPlaceSectionRowView, _MKPlaceActionButtonController, UIButton;
@protocol GEOTransitLineItem, _MKPlaceItem, MKPlaceHeaderButtonsViewControllerDelegate, _MKPlaceActionControlledButton;

@interface MKPlaceHeaderButtonsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, MKETAProviderObserver> {
    MKPlaceSectionRowView *_buttonsContainerView;
    NSArray *_constraints;
    UIButton<_MKPlaceActionControlledButton> *_primaryButton;
    UIButton<_MKPlaceActionControlledButton> *_alternatePrimaryButton;
    UIButton<_MKPlaceActionControlledButton> *_secondaryButton;
    NSMutableAttributedString *_currentETAString;
}

@property (retain, nonatomic) id<_MKPlaceItem> placeItem;
@property (retain, nonatomic) id<GEOTransitLineItem> lineItem;
@property (weak, nonatomic) id<MKPlaceHeaderButtonsViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL resizableViewsDisabled;

- (void)_commonInit;
- (id)init;
- (void).cxx_destruct;
- (void)setupPrimaryButton;
- (id)updateButton:(id)a0 withController:(id)a1;
- (id)directionAttributedStringWithETAString;
- (id)rerouteAttributedString;
- (id)attributedStringWith:(id)a0;
- (id)etaStringFor:(unsigned long long)a0 travelTime:(double)a1;
- (BOOL)shouldStackForButtons:(id)a0;
- (void)primaryButtonSelected:(id)a0;
- (id)primaryAttributedString;
- (void)ETAProviderUpdated:(id)a0;
- (void)setConstraints;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_contentSizeDidChange;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
