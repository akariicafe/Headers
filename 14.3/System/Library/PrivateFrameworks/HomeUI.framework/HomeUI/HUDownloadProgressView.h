@class UIColor, UIImageView, UIImage, UIView, _HUDownloadProgressRingView;

@interface HUDownloadProgressView : UIView {
    UIImageView *_centerImageView;
    UIView *_outerRingView;
    _HUDownloadProgressRingView *_progressView;
}

@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) UIImage *centerImage;
@property (retain, nonatomic) UIColor *outerRingColor;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
