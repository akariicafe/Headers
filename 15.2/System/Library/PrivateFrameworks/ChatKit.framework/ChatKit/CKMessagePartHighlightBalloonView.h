@class UIColor, UIImageView, UIImage, UIView;

@interface CKMessagePartHighlightBalloonView : CKBalloonView

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIView *colorView;
@property (retain, nonatomic) UIColor *balloonColor;
@property (retain, nonatomic) UIImage *glyphImage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setGlyphImageColor:(id)a0;
- (void)configureForMessagePartHighlightChatItem:(id)a0;

@end
