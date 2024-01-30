@class NSString, NSMutableDictionary, UIActivityIndicatorView;

@interface PXCapsuleButton : UIButton {
    NSMutableDictionary *_stateColorMap;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (nonatomic) NSString *maxContentSizeCategory;

- (id)initWithColor:(id)a0;
- (id)_titleFont;
- (id)init;
- (void).cxx_destruct;
- (void)setColor:(id)a0 forState:(unsigned long long)a1;
- (id)colorForState:(unsigned long long)a0;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)_backgroundImageWithColor:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
