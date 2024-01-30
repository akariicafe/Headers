@class NSString, UIFont, UIImage;

@interface CertInfoGradientLabel : UIView {
    struct CGColor { } *_patternColor;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIImage *gradient;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGColor { } *)_patternColor;

@end
