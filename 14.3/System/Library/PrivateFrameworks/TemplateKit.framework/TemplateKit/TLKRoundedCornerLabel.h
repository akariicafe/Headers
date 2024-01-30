@class TLKLabel, UIView;

@interface TLKRoundedCornerLabel : TLKView

@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) TLKLabel *label;
@property (nonatomic) unsigned long long sizeConfiguration;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (id)initWithProminence:(unsigned long long)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })effectiveLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateFont;

@end
