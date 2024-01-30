@interface SBSUIInCallSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic) long long inCallPresentationMode;
@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } windowedAccessoryCutoutFrameInScreen;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
