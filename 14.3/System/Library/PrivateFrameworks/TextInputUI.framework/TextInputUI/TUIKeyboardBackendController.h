@class TIKeyboardInputManagerStub;

@interface TUIKeyboardBackendController : NSObject

@property (retain, nonatomic) TIKeyboardInputManagerStub *inputManager;

+ (id)sharedInstance;

- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestToken:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)performHitTestForTouchEvents:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;

@end
