@class UIButton;
@protocol PXPeopleBootstrapFooterViewDelegate;

@interface PXPeopleBootstrapFooterView : UICollectionReusableView

@property (readonly, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) id<PXPeopleBootstrapFooterViewDelegate> footerViewDelegate;

+ (id)_buttonFont;
+ (id)_buttonTitle;
+ (struct CGSize { double x0; double x1; })_buttonSizeForBoundingSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })sizeForBoundingSize:(struct CGSize { double x0; double x1; })a0;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)enableButton;
- (void)_confirmTapped:(id)a0;

@end
