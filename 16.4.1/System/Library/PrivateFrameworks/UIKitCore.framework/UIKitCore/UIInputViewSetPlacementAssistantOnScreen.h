@class NSArray, UIInputViewSetPlacementAccessoryOnScreen;

@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacementAccessoryOnScreen *_cachedSecondaryPlacement;
    NSArray *_subPlacements;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)infoWithPoint:(struct CGPoint { double x0; double x1; })a0 isCompact:(BOOL)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 position:(unsigned long long)a3;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)inputViewWillAppear;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)showsInputViews;
- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (BOOL)isFloatingAssistantView;
- (BOOL)showsEditItems;
- (void).cxx_destruct;
- (BOOL)accessoryViewWillAppear;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAccessoryViewPadding;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (id)subPlacements;
- (id)subPlacementsForInputViewSet:(id)a0;
- (double)verticalOffset;

@end
