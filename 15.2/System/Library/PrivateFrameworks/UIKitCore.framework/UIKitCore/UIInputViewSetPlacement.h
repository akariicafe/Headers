@class NSArray;
@protocol UIInputViewSetPlacementDelegate;

@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {
    BOOL _dirty;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL showsInputViews;
@property (readonly, nonatomic) BOOL showsKeyboard;
@property (readonly, nonatomic) BOOL showsInputOrAssistantViews;
@property (readonly, nonatomic) BOOL showsEditItems;
@property (readonly, nonatomic) BOOL isUndocked;
@property (readonly, nonatomic) BOOL requiresWindowBasedSafeAreaInsets;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL isFloatingAssistantView;
@property (readonly, nonatomic) BOOL isCompactAssistantView;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) BOOL isHiddenForFloatingTransition;
@property (readonly, nonatomic) BOOL isInteractive;
@property (nonatomic) double extendedHeight;
@property (readonly, nonatomic) double alpha;
@property (retain, nonatomic) NSArray *subPlacements;
@property (nonatomic) id<UIInputViewSetPlacementDelegate> delegate;

+ (id)placement;
+ (id)encodablePlacementsForXPC;
+ (id)deactivatedKeyboardPlacementWithCurrentPlacement:(id /* block */)a0;

- (Class)applicatorClassForKeyboard:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setDirty;
- (unsigned long long)indexForPurpose:(unsigned long long)a0;
- (void)checkSizeForOwner:(id)a0;
- (double)inputAssistantViewHeightForInputViewSet:(id)a0;
- (id)applicatorInfoForOwner:(id)a0;
- (id)horizontalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (id)widthConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (unsigned long long)notificationsForTransitionToPlacement:(id)a0;
- (id)expiringPlacement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustBoundsForNotificationsWithOwner:(id)a0;
- (void)setOtherPlacement:(id)a0;
- (unsigned long long)computeComparisonMask;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inputAccessoryViewPadding;
- (id)description;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)accessoryViewWillAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)inputViewWillAppear;

@end
