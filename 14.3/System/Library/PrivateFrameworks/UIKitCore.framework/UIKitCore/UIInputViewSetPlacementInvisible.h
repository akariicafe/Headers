@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_actualPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (BOOL)isInteractive;
- (void).cxx_destruct;
- (void)setDirty;
- (double)alpha;
- (BOOL)showsKeyboard;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isVisible;
- (BOOL)isEqual:(id)a0;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)inputViewWillAppear;
- (BOOL)accessoryViewWillAppear;
- (id)subPlacements;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)applicatorInfoForOwner:(id)a0;
- (unsigned long long)computeComparisonMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrameForNotificationsUsingHostingItem:(id)a0;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)showsInputViews;
- (void)encodeWithCoder:(id)a0;

@end
