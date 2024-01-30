@class UIColor;

@interface TeaUI.ImageView : UIView {
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ loadingIdentifier;
    void /* unknown type, empty encoding */ _backgroundColor;
}

@property (class, nonatomic, readonly) Class layerClass;

@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) long long contentMode;
@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic, retain) UIColor *backgroundColor;

- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
