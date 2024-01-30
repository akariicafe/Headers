@class UIButton, UILabel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebCameraReaderInfoView : AMSUICommonView

@property (retain, nonatomic) UIButton *bottomLink;
@property (retain, nonatomic) id<AMSUIWebActionRunnable> bottomLinkAction;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_createLabelWithLines:(long long)a0 title:(BOOL)a1;
- (void)_bottomLinkSelected:(id)a0;
- (id)_createButtonWithTarget:(id)a0 selector:(SEL)a1;

@end
