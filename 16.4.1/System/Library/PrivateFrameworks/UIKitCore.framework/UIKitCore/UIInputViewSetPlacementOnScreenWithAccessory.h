@interface UIInputViewSetPlacementOnScreenWithAccessory : UIInputViewSetPlacementOnScreen <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)accessoryViewWillAppear;

@end
