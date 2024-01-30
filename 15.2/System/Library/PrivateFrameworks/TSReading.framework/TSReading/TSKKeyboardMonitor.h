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
+ (id)_singletonAlloc;
+ (id)sharedKeyboardMonitor;
+ (void)addKeyboardObserver:(id)a0;
+ (void)removeKeyboardObserver:(id)a0;
+ (void)setModalKeyboardObserver:(id)a0;
+ (void)setKeyboardHiddenByModalObserver:(id)a0;
+ (BOOL)keyboardIsVisibleAndDocked;
+ (BOOL)keyboardIsAnimating;
+ (BOOL)keyboardIsAnimatingInOrDocking;
+ (BOOL)keyboardIsAnimatingOutOrUndocking;
+ (void)afterKeyboardAnimationPerformBlock:(id /* block */)a0;

- (unsigned long long)retainCount;
- (id)retain;
- (id)autorelease;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (oneway void)release;
- (void)addKeyboardObserver:(id)a0;
- (void)removeKeyboardObserver:(id)a0;
- (void)p_installKeyboardNotifications;
- (void)p_removeKeyboardNotifications;
- (void)setModalKeyboardObserver:(id)a0;
- (void)setKeyboardHiddenByModalObserver:(id)a0;
- (void)afterKeyboardAnimationPerformBlock:(id /* block */)a0;
- (id)p_keyboardFrameView;
- (void)p_keyboardWillShowOrDock:(id)a0;
- (void)p_keyboardDidShowOrDock:(id)a0;
- (void)p_keyboardWillHideOrUndock:(id)a0;
- (void)p_keyboardDidHideOrUndock:(id)a0;
- (void)p_KeyboardWillChangeFrame:(id)a0;
- (void)p_KeyboardDidChangeFrame:(id)a0;
- (void)p_updateKeyboardInfoFromNotification:(id)a0;
- (void)p_enumerateObserversUsingBlock:(id /* block */)a0;
- (void)p_performAnimationCompletionBlocksWithVisible:(BOOL)a0;
- (double)keyboardHeightInView:(id)a0;

@end
