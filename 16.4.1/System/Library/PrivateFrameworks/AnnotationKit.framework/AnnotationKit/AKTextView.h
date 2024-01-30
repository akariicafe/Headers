@protocol AKTextViewKeyCommandDelegate;

@interface AKTextView : UITextView

@property long long maximumNumberOfCharacters;
@property (weak) id<AKTextViewKeyCommandDelegate> keyCommandDelegate;

- (id)textInputTraits;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)motionEnded:(long long)a0 withEvent:(id)a1;
- (void)handleBackTabCommand:(id)a0;
- (void)handleTabCommand:(id)a0;
- (BOOL)isBlockedAction:(SEL)a0;

@end
