@class UITextView, NSString, UIProgressView, UIScrollView, UIView, UILabel, LAUICheckmarkLayer;

@interface PKProvisioningProgressView : UIView {
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) UITextView *primaryLabel;
@property (readonly, nonatomic) UILabel *secondaryLabel;
@property (readonly, nonatomic) UIProgressView *progressView;
@property (readonly, nonatomic) UILabel *progressLabel;
@property (nonatomic, getter=isShowingCheckmark) BOOL showingCheckmark;
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer;

- (void)tintColorDidChange;
- (id)init;
- (void).cxx_destruct;
- (void)createViews;
- (void)_updateCheckmarkColor;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 applyLayout:(BOOL)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setShowingCheckmark:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
