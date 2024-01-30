@class NSString, UIInputViewSetPlacementOnScreen, UIView;

@interface UIInputViewSetPlacementFloating : UIInputViewSetPlacementUndocked <_UIGeometryChangeObserver, NSSecureCoding> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _responderRect;
    struct CGSize { double width; double height; } _lastSize;
    UIInputViewSetPlacementOnScreen *_cachedSecondaryPlacement;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double floatingWidth;
@property (nonatomic) UIView *responderToFollow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)placementWithUndockedOffset:(struct CGPoint { double x0; double x1; })a0 chromeBuffer:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 floatingWidth:(double)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameAtOffset:(struct CGPoint { double x0; double x1; })a0 keyboardSize:(struct CGSize { double x0; double x1; })a1 screenSize:(struct CGSize { double x0; double x1; })a2;
+ (id)infoWithPoint:(struct CGPoint { double x0; double x1; })a0 forOwner:(id)a1;

- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (void)checkSizeForOwner:(id)a0;
- (id)applicatorInfoForOwner:(id)a0;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)expiringPlacement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustBoundsForNotificationsWithOwner:(id)a0;
- (id)currentResponderView;
- (void)setDelegate:(id)a0;
- (BOOL)isFloating;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isFloatingAssistantView;
- (id)initWithCoder:(id)a0;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; id x4; id x5; id x6; id x7; } *)a0 forAncestor:(id)a1;
- (void)dealloc;
- (id)subPlacements;

@end
