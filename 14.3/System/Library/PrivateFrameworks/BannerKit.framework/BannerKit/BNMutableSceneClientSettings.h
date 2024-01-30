@interface BNMutableSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;
@property (nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
