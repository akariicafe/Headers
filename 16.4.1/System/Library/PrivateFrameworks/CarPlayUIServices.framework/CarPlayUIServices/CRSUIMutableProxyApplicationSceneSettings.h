@class NSString;

@interface CRSUIMutableProxyApplicationSceneSettings : CRSUIMutableApplicationSceneSettings <CRSUIProxyApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMapStyle:(long long)a0;

@end
