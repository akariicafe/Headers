@class UIKeyboardInputMode;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

@interface PKPaletteFloatingKeyboardController : NSObject

@property (class, readonly, nonatomic) long long floatingKeyboardType;

@property (nonatomic, getter=isPresentingKeyboard) BOOL presentingKeyboard;
@property (nonatomic, getter=isProcessingReloadInputViews) BOOL processingReloadInputViews;
@property (readonly, nonatomic) UIKeyboardInputMode *emojiInputMode;
@property (weak, nonatomic) id<PKPaletteFloatingKeyboardControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_reloadInputViewsForResponder:(id)a0;
- (void)didChangeInputMode;
- (void)notifyDelegateDidChangeKeyboardType;
- (void)updateFloatingKeyboardType;
- (void)dismissWithReason:(id)a0;
- (id)_responderFromDelegate;
- (void)_presentKeyboardWithType:(long long)a0 forResponder:(id)a1;
- (void)_setTraitsForActiveKeyboard:(id)a0 forResponder:(id)a1;
- (void)presentOrDismissIfPresented;

@end
