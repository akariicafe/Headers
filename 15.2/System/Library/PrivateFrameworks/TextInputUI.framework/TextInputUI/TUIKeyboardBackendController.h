@class NSHashTable, TIKeyboardInputManagerStub, NSObject;
@protocol OS_dispatch_source;

@interface TUIKeyboardBackendController : NSObject {
    BOOL _applicationIsInBackground;
    BOOL _needsRestoreSupplementalLexicons;
}

@property (retain, nonatomic) TIKeyboardInputManagerStub *inputManager;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *supplementalLexiconWatchdog;
@property (readonly, nonatomic) NSHashTable *supplementalLexicons;

+ (id)sharedInstance;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeUISupplementalLexicon:(id)a0;
- (void)generateAutocorrectionsWithKeyboardState:(id)a0 candidateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 requestToken:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)performHitTestForTouchEvents:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)addUISupplementalLexicon:(id)a0;
- (void)_restoreSupplementalLexiconsIfNeeded;

@end
