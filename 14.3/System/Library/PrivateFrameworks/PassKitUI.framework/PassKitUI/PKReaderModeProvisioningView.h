@class UIProgressView, PKReaderModeHeaderView, NSString, PKReaderModeAnimationView, UIImage;

@interface PKReaderModeProvisioningView : UIView {
    PKReaderModeAnimationView *_animationView;
    PKReaderModeHeaderView *_headerView;
    UIProgressView *_progressView;
    BOOL _isProvisioningToWatch;
    NSString *_cardPlacement;
    UIImage *_plasticCardImage;
    UIImage *_digitalCardImage;
}

- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(long long)a1 product:(id)a2;
- (void)_loadAnimation;
- (id)initWithContext:(long long)a0 product:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 product:(id)a1;
- (void)setTransferringProgress:(double)a0 duration:(double)a1;
- (void)setDigitalCardImage:(id)a0;
- (void)setPlasticCardImage:(id)a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
