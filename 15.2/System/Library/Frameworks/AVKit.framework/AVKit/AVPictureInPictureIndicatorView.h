@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView

@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;
@property (copy, nonatomic) NSString *customMessage;

- (void)_updateGeometry;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)a0;
- (void)_addIndicatorLayerIfNeeded;

@end
