@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CRSUITemplateInstrumentClusterSceneSettings : CRSUIInstrumentClusterSceneSettings <CRSUITemplateInstrumentClusterSceneSettings>

@property (readonly, copy, nonatomic) NSString *proxiedApplicationBundleIdentifier;
@property (readonly, copy, nonatomic) NSObject<OS_xpc_object> *templateEndpoint;
@property (readonly, nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) unsigned long long layoutJustification;
@property (readonly, nonatomic) unsigned long long showsCompass;
@property (readonly, nonatomic) unsigned long long showsSpeedLimit;
@property (readonly, nonatomic) unsigned long long showsETA;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
