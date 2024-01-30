@class _UIKeyShortcutHUDSearchTextField, NSArray, _UIKeyShortcutHUDSearchButton, NSString, UIView, UIButton;
@protocol _UIKeyShortcutHUDSearchBarDelegate;

@interface _UIKeyShortcutHUDSearchBar : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) NSArray *standardSearchTextFieldConstraints;
@property (retain, nonatomic) NSArray *searchTextFieldTransitionConstraints;
@property (nonatomic, getter=isUsingFallbackSearchAnimation) BOOL usingFallbackSearchAnimation;
@property (weak, nonatomic) id<_UIKeyShortcutHUDSearchBarDelegate> delegate;
@property (readonly, nonatomic) _UIKeyShortcutHUDSearchTextField *searchTextField;
@property (weak, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic, getter=isSearching) BOOL searching;

- (void)selectAll:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createBackgroundView;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)_createCancelButton;
- (void)_createSearchTextField;
- (void)_doNothing:(id)a0;
- (void)_setupLayout;
- (void)_textChanged:(id)a0;
- (void)didCompleteSearchTransition;
- (void)prepareForSearchTransition:(BOOL)a0 usingCell:(id)a1;

@end
