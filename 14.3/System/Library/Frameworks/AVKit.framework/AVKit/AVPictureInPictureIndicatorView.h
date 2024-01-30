@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView

@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;
@property (copy, nonatomic) NSString *customMessage;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)_updateGeometry;
- (void).cxx_destruct;
- (void)_addIndicatorLayerIfNeeded;
- (void)setBackgroundColor:(id)a0;
- (void)didMoveToWindow;

@end
