@class NSString, _UILegibilitySettings;

@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(long long)a2;
- (id)keyDescriptionForSetting:(long long)a0;

@end
