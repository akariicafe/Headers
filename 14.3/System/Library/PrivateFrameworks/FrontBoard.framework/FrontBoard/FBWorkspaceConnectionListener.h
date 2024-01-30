@class NSString, BSServiceConnectionEndpoint, BSServiceConnectionListener;

@interface FBWorkspaceConnectionListener : NSObject <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_listener;
}

@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedDomainIdentifier;
+ (BOOL)sharedDomainUsesDefaultShellEndpoint;
+ (id)sharedDomainMachService;
+ (id)_sharedDomain;
+ (BOOL)shouldInjectEndpoint;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithDomain:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
