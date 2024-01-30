@class NSString, PXUIWidgetFooterView, UIView, UIButton;
@protocol PXActionRowTileDelegate;

@interface PXActionRowTile : UIView <PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate>

@property (readonly, nonatomic) UIButton *_button;
@property (readonly, nonatomic) PXUIWidgetFooterView *_footer;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) long long idiom;
@property (weak, nonatomic) id<PXActionRowTileDelegate> delegate;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)tintColorDidChange;
- (void)_setupButton;
- (void)_updateButtonTitle;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)widgetFooterView:(id)a0 didSelectDisclosure:(id)a1;
- (void)_setupDecoratedButton;
- (void)handleButtonTap:(id)a0 forEvent:(id)a1;

@end
