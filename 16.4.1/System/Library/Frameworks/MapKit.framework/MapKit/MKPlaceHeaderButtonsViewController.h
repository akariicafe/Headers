@class UIButton, NSArray, NSString, NSMutableAttributedString, UIView, _MKPlaceActionButtonController, MKPlaceSectionRowView;
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
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL resizableViewsDisabled;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_commonInit;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (id)init;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)ETAProviderUpdated:(id)a0;
- (id)attributedStringWith:(id)a0;
- (id)directionAttributedStringWithETAString;
- (id)etaStringFor:(unsigned long long)a0 travelTime:(double)a1;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)primaryAttributedString;
- (void)primaryButtonSelected:(id)a0;
- (id)rerouteAttributedString;
- (void)setConstraints;
- (void)setupPrimaryButton;
- (BOOL)shouldStackForButtons:(id)a0;
- (id)updateButton:(id)a0 withController:(id)a1;

@end
