@class UIImage, NSString;

@interface CKBalloonImageView : UIView

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *invisibleInkEffectImage;
@property (nonatomic) BOOL imageHidden;
@property (retain, nonatomic) NSString *stickerAccessibilityDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
