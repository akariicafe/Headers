@class SKUIImagePlaceholder, CAShapeLayer, UIImage, UITapGestureRecognizer;

@interface SKUIImageView : UIImageView {
    UITapGestureRecognizer *_tapRecognizer;
    struct CGSize { double width; double height; } _lastLayoutSize;
}

@property (readonly, nonatomic) CAShapeLayer *layer;
@property (copy, nonatomic) id /* block */ cornerPathBlock;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) SKUIImagePlaceholder *placeholder;

+ (Class)layerClass;

- (void)layoutSubviews;
- (void)setContents:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;

@end
