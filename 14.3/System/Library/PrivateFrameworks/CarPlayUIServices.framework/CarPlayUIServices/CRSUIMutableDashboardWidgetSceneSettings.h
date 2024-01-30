@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CRSUIMutableDashboardWidgetSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIDashboardWidgetSceneSettings, CRSUIMutableMapStyleProviding>

@property (nonatomic) unsigned long long widgetStyle;
@property (copy, nonatomic) NSObject<OS_xpc_object> *endpoint;
@property (readonly, nonatomic) long long mapStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMapStyle:(long long)a0;

@end
