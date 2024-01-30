@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPImageStackView : LPComponentView {
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

+ (void)initialize;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_layoutImagesForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 images:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
