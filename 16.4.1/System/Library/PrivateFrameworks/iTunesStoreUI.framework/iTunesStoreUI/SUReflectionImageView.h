@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView {
    double _reflectionHeight;
    double _reflectionAlpha;
    BOOL _useImageSize;
    unsigned char _nonSquareImage : 1;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}

@property (nonatomic) double reflectionSpacing;
@property (nonatomic) BOOL nonSquareImage;

- (void)setImage:(id)a0;
- (void)dealloc;
- (id)init;
- (id)initWithReflectionHeight:(double)a0 spacing:(double)a1;
- (void)setReflectionAlphaWhenVisible:(double)a0;
- (void)setReflectionVisible:(BOOL)a0;
- (void)setUseImageSize:(BOOL)a0;

@end
