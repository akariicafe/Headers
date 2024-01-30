@class UIButton, UIImageView, CAShapeLayer;

@interface NMBUIDownloadProgressView : UIView {
    UIButton *_errorIconButton;
    UIImageView *_downloadableIconView;
    CAShapeLayer *_waitingRingLayer;
    CAShapeLayer *_downloadingRingTrackLayer;
    CAShapeLayer *_downloadingRingProgressLayer;
}

@property (nonatomic) unsigned long long state;
@property (nonatomic) float progress;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentFrame;
- (void)_updateDownloadingRingProgressLayerStrokeEnd;
- (id)_ringPath;

@end
