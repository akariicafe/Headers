@class NSString, BSProcessHandle, NSMutableDictionary;
@protocol BLSAssertionService;

@interface BLSHXPCAssertionServiceHost : NSObject <BLSXPCAssertionServiceHostInterface, BSInvalidatable> {
    id<BLSAssertionService> _localService;
    BSProcessHandle *_remoteProcessHandle;
    NSMutableDictionary *_assertionProxies;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _valid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (oneway void)restartAssertionTimeoutTimer:(id)a0;
- (oneway void)acquireAssertion:(id)a0;
- (void)dealloc;
- (oneway void)cancelAssertion:(id)a0 withError:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (id)acquireAssertionForDescriptor:(id)a0 error:(out id *)a1;
- (oneway void)destroyAssertion:(id)a0;
- (id)initWithLocalService:(id)a0 peer:(id)a1;

@end
