@interface NTKUpNextPhotoCell : NTKUpNextBaseCell {
    struct CGSize { double width; double height; } _scaledImageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _facesRect;
    double _aspectRatio;
    BOOL _wantsFullCellPhoto;
}

- (void)applyLayoutAttributes:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithContent:(id)a0;
- (id)transitionContextInView:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
