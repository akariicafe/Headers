@class UIImageView;

@interface _PKEmbossedInkColorButton : _PKInkColorButton

@property (retain, nonatomic) UIImageView *colorImageView;
@property (retain, nonatomic) UIImageView *embossImageView;

+ (id)colorFillImageIsCompact:(BOOL)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithColor:(id)a0 isCompact:(BOOL)a1;

@end
