@class VUIImageView, VUILabel, VUITextLayout, UIView, VUIPhotoSensitivityViewLayout;

@interface VUIPhotoSensitivityView : UIView

@property (retain, nonatomic) VUIPhotoSensitivityViewLayout *layout;
@property (retain, nonatomic) VUIImageView *logoImageView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) VUILabel *descriptionView;
@property (readonly, nonatomic) VUITextLayout *descriptionLayout;

- (BOOL)_isPortrait;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_margin;
- (struct CGSize { double x0; double x1; })_dividerSize;
- (void)_configureSubviewsWithDictionary:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_descriptionMargin;
- (double)_descriptionWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_dividerMargin;
- (void)_hideAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_hideWithAnimationWithCompletion:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_logoMargin;
- (struct CGSize { double x0; double x1; })_logoSize;
- (void)_showAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_showWithAnimationWithCompletion:(id /* block */)a0;
- (id)initWithPhotoSensitivityInfoDictionary:(id)a0;
- (void)show:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
