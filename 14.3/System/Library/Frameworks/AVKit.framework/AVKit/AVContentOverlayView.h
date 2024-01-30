@protocol AVContentOverlayViewDelegate;

@interface AVContentOverlayView : AVTouchIgnoringView

@property (weak, nonatomic) id<AVContentOverlayViewDelegate> delegate;

- (void)_didRemoveSubview:(id)a0;
- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;

@end
