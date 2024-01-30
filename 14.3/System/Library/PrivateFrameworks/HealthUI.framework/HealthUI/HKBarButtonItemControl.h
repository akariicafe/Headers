@class UIBarButtonItem, UIControl, UIToolbar;

@interface HKBarButtonItemControl : UIControl

@property (nonatomic) long long preferredHeight;
@property (nonatomic) BOOL collapseHeight;
@property (nonatomic) double horizontalMargin;
@property (readonly, nonatomic) UIToolbar *toolbar;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) UIControl *barButtonItemControl;

- (void)setTintColor:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (id)initWithSystemItem:(long long)a0 preferredHeight:(double)a1 collapseHeight:(BOOL)a2;
- (void)_barButtonAction:(id)a0;

@end
