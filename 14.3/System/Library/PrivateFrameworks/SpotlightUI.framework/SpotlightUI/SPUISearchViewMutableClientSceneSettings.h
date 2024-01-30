@class NSString;

@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (nonatomic) double distanceToTopOfIcons;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(long long)a0;

@end
