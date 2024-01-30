@interface UIDictationATVLinearView : UIDictationView

- (void)layoutSubviews;
- (void)setState:(int)a0;
- (void)returnToKeyboard;
- (void)setRenderConfig:(id)a0;
- (BOOL)isShowing;
- (void)removeFromSuperview;
- (BOOL)drawsOwnBackground;
- (void)finishReturnToKeyboard;

@end
