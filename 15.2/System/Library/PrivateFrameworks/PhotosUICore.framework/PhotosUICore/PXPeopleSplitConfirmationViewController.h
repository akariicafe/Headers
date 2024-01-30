@class UIBarButtonItem, UILayoutGuide, NSArray, UIView, NSLayoutConstraint, UIButton;

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController

@property (retain, nonatomic) UIView *interimLoadingView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *denyButton;
@property (retain, nonatomic) UIBarButtonItem *undoButton;
@property (retain, nonatomic) UILayoutGuide *controlLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *buttonSizeConstraint;
@property (retain, nonatomic) NSLayoutConstraint *firstButtonSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *secondButtonSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *controlGuideHeightConstraint;
@property (retain, nonatomic) NSArray *portraitConstraints;
@property (retain, nonatomic) NSArray *landscapeConstraints;
@property (retain, nonatomic) NSArray *commonConstraints;

- (id)initWithPerson:(id)a0;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)undoButtonTapped:(id)a0;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)updateViewWithViewState:(unsigned long long)a0;
- (void)suggestionDidDisplay;
- (void)confirmTapped:(id)a0;
- (void)denyTapped:(id)a0;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 andColor:(id)a2;
- (void)_enableActionButtons;
- (void)_disableActionButtonsWithSelectedButton:(id)a0;
- (id)_buttonBackgroundImageFromColor:(id)a0;
- (void)_updateUndoButton;

@end
