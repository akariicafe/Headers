@protocol _UIImageViewOverlayViewDelegate;

@interface _UIImageViewOverlayView : UIView

@property (weak, nonatomic) id<_UIImageViewOverlayViewDelegate> overlayViewDelegate;

- (void)setClipsToBounds:(BOOL)a0;
- (void).cxx_destruct;

@end
