@class MKETAProvider, NSArray, NSString, MUHeaderButtonsViewConfiguration, _MKPlaceActionButtonController, MUPlaceHeaderButton;
@protocol MUPlaceHeaderButtonsViewControllerDelegate;

@interface MUHeaderButtonsView : UIView <MKETAProviderObserver> {
    MUPlaceHeaderButton *_primaryButton;
    MUPlaceHeaderButton *_alternatePrimaryButton;
    MUPlaceHeaderButton *_secondaryButton;
    MUPlaceHeaderButton *_moreButton;
    NSArray *_constraints;
    BOOL _isStackingButtons;
    MUHeaderButtonsViewConfiguration *_configuration;
    MKETAProvider *_etaProvider;
}

@property (weak, nonatomic) id<MUPlaceHeaderButtonsViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long primaryButtonType;
@property (retain, nonatomic) _MKPlaceActionButtonController *alternatePrimaryButtonController;
@property (retain, nonatomic) _MKPlaceActionButtonController *secondaryButtonController;
@property (readonly, nonatomic) NSArray *focusItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_updateConstraintsIfNeeded;
- (void)_updateContent;
- (void)ETAProviderUpdated:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupSubviews;
- (void)_didTapMoreButton;
- (void)_didTapSecondaryAction;
- (void)_didTapPrimaryAction;
- (void)_loadPrimaryButtonWithPrimaryType:(unsigned long long)a0;
- (void)_loadSecondaryButtonWithSecondaryActionController:(id)a0;
- (void)_createLayout;
- (BOOL)shouldStackForButtons;
- (void)_activateNewConstraints:(id)a0;
- (void)_didTapAlternatePrimaryAction;

@end
