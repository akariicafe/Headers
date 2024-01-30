@class MSVTimer;

@interface MediaControlsInteractionRecognizer : UIGestureRecognizer

@property (retain, nonatomic) MSVTimer *interactionTimer;

- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
