@class UIImageView, UIActivityIndicatorView, UILabel, LAUICheckmarkLayer, UIButton;

@interface PKTableHeaderView : UIView {
    struct CGSize { double width; double height; } _originalImageViewSize;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
}

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL shouldResizeImageToFit;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double minimumHeight;
@property (nonatomic) BOOL accessoryViewsDisabled;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UIButton *actionButton;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer;

- (void)_updateFonts;
- (id)_titleFont;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_updateCheckmarkColor;
- (void)dealloc;
- (void)setPassSnapshotUsingDefaultSize:(id)a0 animated:(BOOL)a1 needsCorners:(BOOL)a2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setPassSnapshot:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2 needsCorners:(BOOL)a3;
- (void)setImageViewImage:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 animated:(BOOL)a2;
- (void)_updateAccessoryViews;
- (struct CGSize { double x0; double x1; })_sizeThatFitsExcludingImage:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)_updateImageView;
- (BOOL)_hasAccessibilityLargeText;
- (id)_subtitleFont;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
