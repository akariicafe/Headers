@class NSArray, UIVisualEffectView, UIToolbar, UIView, NSString;

@interface PUImportFloatingToolbarView : UIView

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *shadowView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL shouldBlurBackground;
@property (copy, nonatomic) NSString *backdropViewGroupName;

- (void)_updateBackground;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setItems:(id)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_updateBackdropViewGroupName;

@end
