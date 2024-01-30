@class NSString;

@interface SBUIBannerSceneClientSettings : BNSceneClientSettings <BSSettingDescriptionProvider>

@property (readonly, copy, nonatomic) NSString *transitionDismissalPreventionReason;
@property (readonly, copy, nonatomic) NSString *wantsDefaultGesturePriorityReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;

@end
