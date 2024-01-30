@class UIImageView, UILabel;

@interface TabIconAndTitleView : UIView {
    BOOL _horizontallyCenterTitle;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    BOOL _usesAccessibilityContentSizeCategory;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
