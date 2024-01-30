@class NSString, RTIInputSystemService, BSServiceConnectionListener;

@interface RTIInputSystemUIService : RTIInputSystemService <BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener *_bsConnectionListener;
    NSString *_domainName;
    NSString *_serviceName;
}

@property (readonly, nonatomic) RTIInputSystemService *rtiService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedServiceWithDomainName:(id)a0 serviceName:(id)a1;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_createListenerIfNecessary;
- (void)_destroyListenerIfNecessary;
- (id)listenerEndpoint;
- (id)initWithDomainName:(id)a0 serviceName:(id)a1;
- (BOOL)_canResumeConnection;
- (void).cxx_destruct;

@end
