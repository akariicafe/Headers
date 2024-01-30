@interface UIDictationATVLinearView : UIDictationView

- (void)setRenderConfig:(id)a0;
- (void)removeFromSuperview;
- (BOOL)isShowing;
- (void)finishReturnToKeyboard;
- (BOOL)drawsOwnBackground;
- (void)layoutSubviews;
- (void)setState:(int)a0;
- (void)returnToKeyboard;

@end
