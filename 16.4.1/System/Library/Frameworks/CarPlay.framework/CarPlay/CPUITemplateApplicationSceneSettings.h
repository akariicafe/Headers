@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CPUITemplateApplicationSceneSettings : UIApplicationSceneSettings <CPUITemplateApplicationSceneSettings>

@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
