@class NSString, BSServicesConfiguration, NSMutableDictionary, RBSService;

@interface BSServiceManager : NSObject <RBSServiceDelegate> {
    BSServicesConfiguration *_bootstrapConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_identifierToDomain;
    BOOL _lock_bootstrapped;
    unsigned long long _lock_bootstrapExtensions;
    NSMutableDictionary *_lock_endpointToOutgoingRootConnections;
    NSMutableDictionary *_lock_inheritanceToEndpoint;
    NSMutableDictionary *_lock_endpointToInheritances;
    NSMutableDictionary *_lock_serviceIdentifierToEndpoints;
    NSMutableDictionary *_lock_serviceIdentifierToMonitors;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _callOutLock;
    NSMutableDictionary *_callOutLock_serviceIdentifierToEndpointsToEnvironments;
    RBSService *_RBSService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)service:(id)a0 didLoseInheritances:(id)a1;
- (void)service:(id)a0 didReceiveInheritances:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
