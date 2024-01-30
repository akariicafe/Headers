@class NSString, BSServiceConnectionEndpoint;

@interface SBSUIStarkNotificationsSceneSettings : UIApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (readonly, nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;
@property (readonly, nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property (readonly, nonatomic) unsigned long long suspensionReasons;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
