@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CPUIMutableTemplateApplicationSceneSettings : UIMutableApplicationSceneSettings <CPUITemplateApplicationSceneSettings>

@property (copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
