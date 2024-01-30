@class NSString;

@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings <BSSettingDescriptionProvider>

@property (nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (nonatomic) int viewControllerAppearState;
@property (nonatomic) int bannerAppearState;
@property (copy, nonatomic) NSString *revocationReason;
@property (nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (copy, nonatomic) Class clientContainerViewControllerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
