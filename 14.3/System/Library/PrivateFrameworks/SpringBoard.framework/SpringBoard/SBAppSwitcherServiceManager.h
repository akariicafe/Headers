@class SBAppSwitcherServiceSet;

@interface SBAppSwitcherServiceManager : NSObject {
    SBAppSwitcherServiceSet *_services;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)unregisterService:(id)a0;
- (void)registerService:(id)a0;
- (id)registeredServicesSnapshot;

@end
