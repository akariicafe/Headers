@interface UIDictationATVLinearView : UIDictationView

- (void)setRenderConfig:(id)a0;
- (BOOL)isShowing;
- (void)removeFromSuperview;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (void)returnToKeyboard;
- (BOOL)drawsOwnBackground;
- (void)setState:(int)a0;

@end
