@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface ACCiAP2ShimServerClient : NSObject

@property (readonly, nonatomic) BOOL entitlementForAllAccessories;
@property (readonly, nonatomic) NSArray *clientEAProtocols;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *processAssertionQ;
@property (readonly, nonatomic) struct SBSProcessAssertion { } *processAssertion;
@property (readonly, nonatomic) long long processAssertionStartTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *processAssertionTimer;
@property (readonly, nonatomic) int iapSessionRefCount;
@property (nonatomic) unsigned int applicationState;
@property (nonatomic) unsigned int clientID;
@property (readonly, nonatomic) int processId;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) struct { unsigned int val[8]; } auditToken;
@property (readonly, nonatomic) unsigned int capabilities;
@property (nonatomic) BOOL locationSupportedByClient;
@property (nonatomic) BOOL cameraSupportedByClient;
@property (readonly, nonatomic) BOOL supportsAccessibility;
@property (nonatomic) BOOL clientRequiresAccReset;

- (void)releaseProcessAssertion;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)_applicationInfoForBundleIDSync:(id)a0;
- (void)takeProcessAssertion:(id)a0;
- (id)initWithCapabilities:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; })a1 xpcConnection:(id)a2 eaProtocols:(id)a3 andBundleId:(id)a4;
- (BOOL)canSendConnectionEventForAccessory:(id)a0;

@end
