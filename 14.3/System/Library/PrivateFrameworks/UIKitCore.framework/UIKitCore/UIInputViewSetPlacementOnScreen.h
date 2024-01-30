@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)showsKeyboard;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)inputViewWillAppear;
- (BOOL)showsInputViews;

@end
