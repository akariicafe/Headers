@class NSString;

@interface BNMutableSceneClientSettings : UIMutableApplicationSceneClientSettings <BSSettingDescriptionProvider>

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } bannerContentOutsets;
@property (nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
