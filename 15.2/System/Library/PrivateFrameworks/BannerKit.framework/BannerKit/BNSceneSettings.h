@class NSString;

@interface BNSceneSettings : UIApplicationSceneSettings <BSSettingDescriptionProvider>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } containerSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } presentationSize;
@property (readonly, nonatomic) int viewControllerAppearState;
@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, copy, nonatomic) NSString *revocationReason;
@property (readonly, nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (readonly, copy, nonatomic) Class clientContainerViewControllerClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
