@interface BNSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
