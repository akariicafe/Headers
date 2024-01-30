@class NSString, NSDictionary, BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSMutableArray;

@interface BSServiceDomain : NSObject {
    BSServiceDomainSpecification *_specification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSXPCServiceConnectionListener *_xpcListener;
    NSString *_listenerEndpointDescription;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
}

- (id)init;
- (void).cxx_destruct;

@end
