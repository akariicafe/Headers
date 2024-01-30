@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableDictionary, NSMutableArray;

@interface BSService : NSObject {
    BSServiceDomain *_domain;
    BSServiceSpecification *_specification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
}

- (void).cxx_destruct;

@end
