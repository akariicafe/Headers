@interface UIInputViewSetPlacementOnScreen : UIInputViewSetPlacement <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)showsInputOrAssistantViews;
- (BOOL)showsKeyboard;
- (BOOL)showsInputViews;
- (BOOL)inputViewWillAppear;

@end
