@class NSString, UIVisualEffectView, UILayoutGuide, UILabel, UIButton;

@interface SFInteractiveBannerCell : UICollectionViewCell {
    UIVisualEffectView *_backgroundEffectView;
    UIButton *_actionButton;
    UILayoutGuide *_textLayoutGuide;
    id /* block */ _buttonAction;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UILabel *leadingLabel;
@property (readonly, nonatomic) UILabel *captionLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureUsingBanner:(id)a0;
- (void)_updateVibrancy;
- (void)_actionButtonTapped:(id)a0;
- (void)_removeActionButton;
- (void)_updateActionButtonWithText:(id)a0;

@end
