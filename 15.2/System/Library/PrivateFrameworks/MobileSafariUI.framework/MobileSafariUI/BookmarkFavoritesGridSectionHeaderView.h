@class UIView, UILabel, NSLayoutConstraint, UIButton;
@protocol BookmarkFavoritesGridSectionHeaderViewDelegate;

@interface BookmarkFavoritesGridSectionHeaderView : UICollectionReusableView {
    NSLayoutConstraint *_leadingTitleConstraint;
    NSLayoutConstraint *_trailingTitleConstraint;
    NSLayoutConstraint *_trailingControlSpaceConstraint;
    NSLayoutConstraint *_trailingAccessoryViewTrailingSpaceConstraint;
    UIButton *_toggleButton;
    BOOL _shouldShowAsToggled;
    BOOL _shouldDisableShowLess;
    double _horizontalMargin;
    long long _buttonStyle;
    long long _sectionType;
    UIView *_bottomAccessoryView;
    id<BookmarkFavoritesGridSectionHeaderViewDelegate> _delegate;
}

@property (readonly, nonatomic) UILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)_didSelectToggleButton;

@end
