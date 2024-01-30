@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)isVisible;
- (BOOL)isInteractive;
- (id)applicatorInfoForOwner:(id)a0;
- (double)alpha;
- (BOOL)showsKeyboard;
- (BOOL)showsInputViews;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)inputViewWillAppear;

@end
