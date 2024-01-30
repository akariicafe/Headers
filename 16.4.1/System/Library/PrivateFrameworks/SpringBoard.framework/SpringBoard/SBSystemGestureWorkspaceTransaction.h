@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction {
    NSString *_suppressionReason;
}

@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizer;
@property (readonly, nonatomic) long long completionType;

- (id)initWithTransitionRequest:(id)a0;
- (void)_setupAnimation;
- (void)_beginAnimation;
- (void)_begin;
- (void)_didComplete;
- (void).cxx_destruct;
- (void)_finishWithCompletionType:(long long)a0;
- (void)finishWithCompletionType:(long long)a0;
- (BOOL)shouldSuppressMedusaKeyboardDuringGesture;
- (void)systemGestureStateChanged:(id)a0;

@end
