@class NSString;

@interface CRSUIProxyApplicationSceneSettings : CRSUIApplicationSceneSettings <CRSUIProxyApplicationSceneSettings>

@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL proxiedApplicationLinkedOnOrAfterYukon;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
