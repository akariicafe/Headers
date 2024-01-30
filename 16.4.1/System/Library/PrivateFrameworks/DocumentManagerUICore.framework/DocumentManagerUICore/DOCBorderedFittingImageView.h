@interface DOCBorderedFittingImageView : DOCFittingImageView

@property (nonatomic) BOOL addDecoration;

- (void)setFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)updateImage:(id)a0 addDecoration:(BOOL)a1;

@end
