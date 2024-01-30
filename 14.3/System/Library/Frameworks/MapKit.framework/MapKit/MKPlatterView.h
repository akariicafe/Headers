@class UIFont, NSString, UIColor, UIImageView, MKVibrantView;

@interface MKPlatterView : UIView {
    UIImageView *_glyphImageView;
    MKVibrantView *_platterView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) NSString *glyph;
@property (retain, nonatomic) UIFont *glyphFont;
@property (retain, nonatomic) UIColor *glyphColor;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)updateGlyph;
- (void)layoutSubviews;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
