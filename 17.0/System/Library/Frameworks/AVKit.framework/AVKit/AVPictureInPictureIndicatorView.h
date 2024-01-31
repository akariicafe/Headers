@class NSString, AVPictureInPictureIndicatorLayer;

@interface AVPictureInPictureIndicatorView : UIView

@property (retain, nonatomic) AVPictureInPictureIndicatorLayer *pipIndicatorLayer;
@property (copy, nonatomic) NSString *customMessage;

- (void)setBackgroundColor:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void)_updateGeometry;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_addIndicatorLayerIfNeeded;

@end
