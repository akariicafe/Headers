@class NSString, NSDictionary;
@protocol RBEntitlementManaging;

@interface RBJetsamPropertyManager : NSObject <RBJetsamPropertyManaging> {
    id<RBEntitlementManaging> _entitlementManager;
    NSDictionary *_xpcServices;
    id _xpcServicesGlobal;
    NSDictionary *_xpcServicesSys;
    id _xpcServicesSysGlobal;
    NSDictionary *_extensionPoints;
    id _extensionPointsGlobal;
    NSDictionary *_applications;
    id _applicationsGlobal;
    NSDictionary *_applicationsSys;
    id _applicationsSysGlobal;
    NSDictionary *_daemons;
    id _daemonsGlobal;
    NSDictionary *_angels;
    id _angelsGlobal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)testJetsamProperties;
+ (int)testTaskLimitForPid:(int)a0;
+ (id)unmanagedJetsamProperties;

@end
