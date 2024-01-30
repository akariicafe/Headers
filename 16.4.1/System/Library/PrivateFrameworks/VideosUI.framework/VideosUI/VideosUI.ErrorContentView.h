@class UIView;

@interface VideosUI.ErrorContentView : VUIBaseView {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ descriptionView;
    void /* unknown type, empty encoding */ debugTextView;
    void /* unknown type, empty encoding */ debugTextView2;
}

@property (nonatomic, readonly) UIView *accessibilityTitleView;
@property (nonatomic, readonly) UIView *accessibilityDescriptionView;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
