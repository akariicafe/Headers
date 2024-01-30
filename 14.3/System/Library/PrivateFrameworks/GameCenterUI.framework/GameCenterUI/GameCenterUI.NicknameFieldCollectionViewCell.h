@class _TtC12GameCenterUI20DynamicTypeTextField;

@interface GameCenterUI.NicknameFieldCollectionViewCell : GameCenterUI.BaseCollectionViewCell <UITextFieldDelegate> {
    void /* unknown type, empty encoding */ previousTitleTextColor;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ nicknamePresenter;
    void /* unknown type, empty encoding */ suggestionsChangedSubscription;
    void /* unknown type, empty encoding */ nicknameUpdatedSubscription;
    void /* unknown type, empty encoding */ accessoryAction;
    void /* unknown type, empty encoding */ disabled;
}

@property (nonatomic, readonly) _TtC12GameCenterUI20DynamicTypeTextField *accessibilityTextLabel;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidEndEditing:(id)a0 reason:(long long)a1;
- (void)textFieldDidChangeSelection:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
