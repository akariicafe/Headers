@class NSArray, LPImageViewStyle, NSMutableArray;

@interface LPImageStackView : LPComponentView {
    NSArray *_images;
    LPImageViewStyle *_style;
    NSMutableArray *_imageViews;
}

- (id)init;
- (void).cxx_destruct;
- (void)layoutComponentView;
- (id)initWithImages:(id)a0 style:(id)a1;
- (void)setDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })_layoutImagesForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
