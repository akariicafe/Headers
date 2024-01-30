@interface ConversationKit.TapInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    void /* unknown type, empty encoding */ tapGestureRecognizer;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ view;
@property (nonatomic) long long numberOfTapsRequired;

- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)willMoveToView:(id)a0;
- (void)didMoveToView:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleRecognizer:(id)a0;

@end
