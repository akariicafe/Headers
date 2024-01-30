@class UIInputViewSetPlacement;

@interface UIInputViewSetPlacementWrapper : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement *_actualPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)placementWithPlacement:(id)a0;

- (BOOL)showsKeyboard;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isUndocked;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)isVisible;
- (BOOL)inputViewWillAppear;
- (id)initWithCoder:(id)a0;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)showsInputViews;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isInteractive;
- (BOOL)showsEditItems;
- (void).cxx_destruct;
- (double)alpha;
- (BOOL)accessoryViewWillAppear;
- (id)applicatorInfoForOwner:(id)a0;
- (unsigned long long)computeComparisonMask;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (void)setDirty;
- (id)subPlacements;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;

@end
