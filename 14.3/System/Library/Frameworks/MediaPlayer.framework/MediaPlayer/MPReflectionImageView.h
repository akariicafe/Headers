@class UIImage, UIImageView;

@interface MPReflectionImageView : _UIReflectingView

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL squareImage;
@property (readonly, nonatomic) UIImageView *imageView;

+ (double)defaultReflectionHeight;

- (id)albumArtImage;
- (void)setAlbumVisible:(BOOL)a0 reflectionVisible:(BOOL)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withReflectionHeight:(double)a1;
- (void)setReflectionVisible:(BOOL)a0 withDuration:(float)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
