@class NSString;

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (nonatomic) long long idleTimerMode;
@property (copy, nonatomic) NSString *statusBarUserNameOverride;
@property (nonatomic) long long rotationMode;
@property (nonatomic) unsigned long long wallpaperMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
