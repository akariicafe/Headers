@class UIFont, NSString, PXCMMImageView, PXUpdater, UILabel, PXCapsuleButton;

@interface PXCMMSendBackBannerView : UIView {
    PXCapsuleButton *_actionButton;
    NSString *_actionButtonTitle;
    id /* block */ _actionButtonAction;
    PXCMMImageView *_imageView;
    UILabel *_captionLabel;
    UILabel *_headlineLabel;
    PXUpdater *_updater;
}

@property (class, readonly, nonatomic) double captionLabelTopInset;
@property (class, readonly, nonatomic) UIFont *captionLabelFont;
@property (class, readonly, nonatomic) double bottomInset;

+ (id)_headlineLabelFont;

- (void)setActionButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1;
- (void)_updateActionButton;
- (id)init;
- (void)_actionButtonTapped:(id)a0;
- (id)_actionButtonWithTitle:(id)a0 action:(SEL)a1 enabled:(BOOL)a2;
- (id)_headlineStringAttributes;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)setAsset:(id)a0 mediaProvider:(id)a1;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInWidth:(double)a0 updateSubviewFrames:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateLabels;
- (id)new;
- (id)_attributedStringWithString:(id)a0;
- (void)layoutSubviews;
- (id)initWithMessage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
