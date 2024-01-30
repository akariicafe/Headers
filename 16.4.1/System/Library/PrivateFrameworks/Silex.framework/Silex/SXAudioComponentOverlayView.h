@class UIImage, UIButton, UIActivityIndicatorView;

@interface SXAudioComponentOverlayView : UIImageView

@property (readonly, nonatomic) UIImage *audioIndicatorImage;
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) UIButton *playButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (id)image;
- (void).cxx_destruct;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;

@end
