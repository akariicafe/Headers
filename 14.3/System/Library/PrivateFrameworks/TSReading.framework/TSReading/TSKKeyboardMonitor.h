@class UIWindow, NSMutableArray;
@protocol TSKKeyboardObserver;

@interface TSKKeyboardMonitor : NSObject {
    BOOL _weAreFakingAHideEvent;
    BOOL _lastHideWasFake;
    BOOL _suppressDidHide;
    struct __CFArray { } *_keyboardObservers;
    NSMutableArray *_completionBlocks;
    id<TSKKeyboardObserver> _exclusiveKeyboardObserver;
}

@property (nonatomic) UIWindow *rootWindow;
@property (readonly) BOOL keyboardIsVisibleAndDocked;
@property (readonly) BOOL keyboardIsAnimating;
@property (readonly) BOOL keyboardIsAnimatingInOrDocking;
@property (readonly) BOOL keyboardIsAnimatingOutOrUndocking;
@property (readonly) double onScreenHeight;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (readonly) double keyboardAnimationDuration;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)keyboardIsAnimatingInOrDocking;
+ (BOOL)keyboardIsAnimating;
+ (void)setKeyboardHiddenByModalObserver:(id)a0;
+ (void)afterKeyboardAnimationPerformBlock:(id /* block */)a0;
+ (void)setModalKeyboardObserver:(id)a0;
+ (id)_singletonAlloc;
+ (void)addKeyboardObserver:(id)a0;
+ (BOOL)keyboardIsAnimatingOutOrUndocking;
+ (BOOL)keyboardIsVisibleAndDocked;
+ (id)sharedKeyboardMonitor;
+ (void)removeKeyboardObserver:(id)a0;

- (void)p_keyboardDidHideOrUndock:(id)a0;
- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (void)p_installKeyboardNotifications;
- (void)dealloc;
- (void)setKeyboardHiddenByModalObserver:(id)a0;
- (void)afterKeyboardAnimationPerformBlock:(id /* block */)a0;
- (void)p_keyboardWillShowOrDock:(id)a0;
- (void)setModalKeyboardObserver:(id)a0;
- (void)p_KeyboardWillChangeFrame:(id)a0;
- (void)p_performAnimationCompletionBlocksWithVisible:(BOOL)a0;
- (unsigned long long)retainCount;
- (void)p_removeKeyboardNotifications;
- (void)p_keyboardDidShowOrDock:(id)a0;
- (void)p_updateKeyboardInfoFromNotification:(id)a0;
- (void)addKeyboardObserver:(id)a0;
- (double)keyboardHeightInView:(id)a0;
- (id)retain;
- (void)removeKeyboardObserver:(id)a0;
- (void)p_KeyboardDidChangeFrame:(id)a0;
- (void)p_enumerateObserversUsingBlock:(id /* block */)a0;
- (void)p_keyboardWillHideOrUndock:(id)a0;
- (id)p_keyboardFrameView;

@end
