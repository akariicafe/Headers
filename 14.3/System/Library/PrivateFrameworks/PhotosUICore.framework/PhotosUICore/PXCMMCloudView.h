@class PXGradientView, UIImageView, PXRoundedCornerOverlayView, UILabel, UIButton;
@protocol PXCMMCloudViewViewDelegate;

@interface PXCMMCloudView : UIView {
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    struct { BOOL learnMoreTapped; BOOL dismissTapped; BOOL sizeThatFitsDidChange; } _delegateRespondsTo;
}

@property (readonly, nonatomic) UIButton *dismissButton;
@property (readonly, nonatomic) PXGradientView *graphicGradientView;
@property (readonly, nonatomic) UIImageView *graphicImageView;
@property (readonly, nonatomic) UILabel *bodyLabel;
@property (readonly, nonatomic) UIButton *learnMoreButton;
@property (readonly, nonatomic) unsigned long long style;
@property (weak, nonatomic) id<PXCMMCloudViewViewDelegate> delegate;
@property (nonatomic) BOOL disableDismissAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_constrainedFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1;
- (void)_updateFontAndStyle;
- (void)_learnMoreTapped:(id)a0;
- (void)_didTapDismissButton:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)_setupSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
