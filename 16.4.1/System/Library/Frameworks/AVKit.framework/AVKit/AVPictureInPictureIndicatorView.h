@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView

@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;
@property (copy, nonatomic) NSString *customMessage;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)didMoveToWindow;
- (void)_updateGeometry;
- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)_addIndicatorLayerIfNeeded;

@end
