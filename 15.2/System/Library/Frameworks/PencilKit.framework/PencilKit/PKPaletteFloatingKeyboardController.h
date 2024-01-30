@class UIKeyboardInputMode, UIMenu;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu *_cachedKeyboardMenu;
}

@property (class, readonly, nonatomic) long long floatingKeyboardType;

@property (nonatomic, getter=isPresentingKeyboard) BOOL presentingKeyboard;
@property (nonatomic, getter=isProcessingReloadInputViews) BOOL processingReloadInputViews;
@property (readonly, nonatomic) UIKeyboardInputMode *emojiInputMode;
@property (weak, nonatomic) id<PKPaletteFloatingKeyboardControllerDelegate> delegate;
@property (readonly, nonatomic) UIMenu *keyboardSelectionMenu;

- (void)_reloadInputViewsForResponder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)didChangeInputMode;
- (void)notifyDelegateDidChangeKeyboardType;
- (void)updateFloatingKeyboardType;
- (void)_presentOrDismissWithKeyboardType:(long long)a0;
- (void)_updateKeyboardMenuIfNecessary;
- (void)_clearMenuStateIfNecessary;
- (void)presentOrDismissIfPresented;
- (void)dismissWithReason:(id)a0;
- (id)_responderFromDelegate;
- (void)_presentKeyboardWithType:(long long)a0 forResponder:(id)a1;
- (void)_setTraitsForActiveKeyboard:(id)a0 forResponder:(id)a1;

@end
