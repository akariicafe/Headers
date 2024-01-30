@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)showsKeyboard;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isUndocked;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)isVisible;
- (BOOL)inputViewWillAppear;
- (BOOL)showsInputViews;
- (BOOL)isInteractive;
- (double)alpha;
- (id)applicatorInfoForOwner:(id)a0;

@end
