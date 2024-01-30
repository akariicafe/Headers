@class NSString, SBHSearchTextField, SBHFeatherBlurView, UIButton;
@protocol SBIconListLayoutProvider, SBHSearchBarDelegate;

@interface SBHSearchBar : UIView <UITextFieldDelegate> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _searchTextFieldEdgeInsetsForCancelButton;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _searchTextFieldLayoutInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } searchTextFieldHorizontalEdgeInsets;
@property (nonatomic) double searchTextFieldBottomEdgeInset;
@property (readonly, nonatomic) SBHFeatherBlurView *backgroundView;
@property (retain, nonatomic) SBHSearchTextField *searchTextField;
@property (weak, nonatomic) id<SBHSearchBarDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL showsCancelButton;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)becomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)resignFirstResponder;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_cancelButtonWasHit:(id)a0;
- (void)_accessibilityBoldStatusDidChange:(id)a0;
- (void)_updateCancelButtonFont;
- (void)_searchBarTextFieldDidChangeText:(id)a0;
- (double)_performHeightCalculation;
- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
