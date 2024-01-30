@class UIView, NSTimer, VUIImageView, NSArray, UIImage, VUIVideoAdvisoryViewLayout, VUIPhotoSensitivityView, NSDictionary;

@interface VUIVideoAdvisoryView : UIView

@property (retain, nonatomic) VUIVideoAdvisoryViewLayout *layout;
@property (retain, nonatomic) VUIImageView *logoImageView;
@property (retain, nonatomic) UIImage *photoSensitivityImage;
@property (retain, nonatomic) UIView *dividerView;
@property (copy, nonatomic) NSArray *legendViews;
@property (retain, nonatomic) VUIPhotoSensitivityView *photoSensitivityView;
@property (retain, nonatomic) NSDictionary *photoSensitivityDictionary;
@property (retain, nonatomic) NSTimer *photoSensitivityTimer;

- (BOOL)_isPortrait;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_margin;
- (struct CGSize { double x0; double x1; })_dividerSize;
- (id)initWithAdvisoryInfoDictionary:(id)a0;
- (void)_configureSubviewsWithDictionary:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dividerMargin;
- (void)_hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_hideWithCoreAnimationWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_legendSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_legendsMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoMargin;
- (struct CGSize { double x0; double x1; })_logoSize;
- (void)_showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_showWithAnimationWithCompletion:(id /* block */)a0;
- (void)_showWithCoreAnimationWithCompletion:(id /* block */)a0;
- (void)show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)showPhotoSensitivity:(BOOL)a0 image:(id)a1 animated:(BOOL)a2;

@end
