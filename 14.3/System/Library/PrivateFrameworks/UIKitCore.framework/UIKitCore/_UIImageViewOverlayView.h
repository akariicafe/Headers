@protocol _UIImageViewOverlayViewDelegate;

@interface _UIImageViewOverlayView : UIView

@property (weak, nonatomic) id<_UIImageViewOverlayViewDelegate> overlayViewDelegate;

- (void).cxx_destruct;
- (void)setClipsToBounds:(BOOL)a0;

@end
