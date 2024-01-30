@class UIColor, _PKInkToolOpacityLabel, UIImageView, NSString;

@interface _PKEmbossedInkToolButton : UIButton <PKInkToolButton>

@property (retain, nonatomic) UIImageView *toolDockMaskImageView;
@property (retain, nonatomic) UIImageView *toolBaseImageView;
@property (retain, nonatomic) UIImageView *nibImageView;
@property (retain, nonatomic) UIImageView *nibEmbossImageView;
@property (retain, nonatomic) _PKInkToolOpacityLabel *opacityLabel;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) unsigned long long sizeState;
@property (nonatomic) BOOL isUsedOnDarkBackground;
@property (nonatomic) unsigned long long attributeSet;

+ (struct CGSize { double x0; double x1; })_toolBaseImageSizeForIdentifier:(id)a0 sizeState:(unsigned long long)a1;
+ (id)imageNameForIdentifier:(id)a0;
+ (id)imageNameForIdentifier:(id)a0 sizeState:(unsigned long long)a1 imageType:(id)a2;
+ (id)buttonWithIdentifier:(id)a0 color:(id)a1 sizeState:(unsigned long long)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithIdentifier:(id)a0 color:(id)a1 sizeState:(unsigned long long)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 sizeState:(unsigned long long)a1;
- (id)nibImageName;
- (id)toolDockMaskImageName;
- (id)nibEmbossImageName;
- (double)embossAlphaForColor:(id)a0;
- (id)toolBaseImageName;
- (void)setColor:(id)a0 animated:(BOOL)a1;

@end
