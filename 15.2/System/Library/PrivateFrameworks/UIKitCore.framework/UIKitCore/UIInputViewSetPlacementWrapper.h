@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementWrapper : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_actualPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)isUndocked;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)isVisible;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)isInteractive;
- (void)encodeWithCoder:(id)a0;
- (void)setDirty;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (id)applicatorInfoForOwner:(id)a0;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (unsigned long long)computeComparisonMask;
- (BOOL)showsEditItems;
- (id)description;
- (double)alpha;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)showsKeyboard;
- (BOOL)accessoryViewWillAppear;
- (BOOL)showsInputViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (id)subPlacements;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)inputViewWillAppear;

@end
