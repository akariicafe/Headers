@class NSString;

@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchViewSceneSettings>

@property (nonatomic) double revealProgress;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) unsigned long long presentationIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
