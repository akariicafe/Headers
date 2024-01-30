@class NSArray, UIVisualEffectView, UIToolbar, UIView, NSString;

@interface PUImportFloatingToolbarView : UIView

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *shadowView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldBlurBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;

- (void)setItems:(id)a0 animated:(BOOL)a1;
- (void)_updateBackground;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)_updateBackdropViewGroupName;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
