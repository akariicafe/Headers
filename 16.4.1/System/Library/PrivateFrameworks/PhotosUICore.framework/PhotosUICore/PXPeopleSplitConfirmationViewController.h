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

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (id)_buttonBackgroundImageFromColor:(id)a0;
- (id)_buttonWithTitle:(id)a0 action:(SEL)a1 andColor:(id)a2;
- (void)_disableActionButtonsWithSelectedButton:(id)a0;
- (void)_enableActionButtons;
- (void)_updateUndoButton;
- (void)confirmTapped:(id)a0;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)denyTapped:(id)a0;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)a0;
- (void)suggestionDidDisplay;
- (void)suggestionManager:(id)a0 hasNewSuggestionsAvailable:(id)a1;
- (void)undoButtonTapped:(id)a0;
- (void)updateViewWithViewState:(unsigned long long)a0;

@end
