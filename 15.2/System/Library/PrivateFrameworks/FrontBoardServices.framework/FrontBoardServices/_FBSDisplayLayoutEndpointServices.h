@class _FBSDisplayLayoutService;

@interface _FBSDisplayLayoutEndpointServices : NSObject {
    _FBSDisplayLayoutService *_sharedLock_services[3];
    unsigned long long _sharedLock_servicesRefCnt[3];
}

+ (void)_checkinService:(id)a0;
+ (id)_checkoutServiceWithEndpoint:(id)a0 qos:(char)a1;

- (void).cxx_destruct;

@end
