@interface DOCBorderedFittingImageView : DOCFittingImageView

@property (nonatomic) BOOL addDecoration;

- (void)layoutSubviews;
- (void)setFittingSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateImage:(id)a0 addDecoration:(BOOL)a1;

@end
