@protocol _UIKeyShortcutHUDKeyListenerDelegate;

@interface _UIKeyShortcutHUDModifierKeyListener : NSObject

@property (nonatomic) long long currentModifierFlags;
@property (weak, nonatomic) id<_UIKeyShortcutHUDKeyListenerDelegate> delegate;

- (void)handleKeyboardEvent:(id)a0;
- (void)resetModifierFlags;
- (void).cxx_destruct;

@end
