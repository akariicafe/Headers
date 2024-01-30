@class NSString, BSServiceConnectionEndpoint;

@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>

@property (nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property (nonatomic) unsigned long long suspensionReasons;
@property (retain, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
