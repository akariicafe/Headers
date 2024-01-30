@class BSMutableIntegerMap, NSString, BSServiceInterface, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, BKHIDDomainServiceDelegate, OS_os_log;

@interface BKHIDDomainServiceServer : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable> {
    BSServiceConnectionListener *_connectionListener;
    id<BKHIDDomainServiceDelegate> _delegate;
    BSServiceInterface *_interface;
    id _serviceTarget;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
    NSString *_entitlement;
    NSString *_serviceName;
    BSMutableIntegerMap *_lock_connectionsByPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct atomic_flag { _Atomic BOOL _Value; } _invalid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)userInfoForConnection:(id)a0;
- (id)connectionForPID:(int)a0;
- (void)enumerateUserInfoWithBlock:(id /* block */)a0;
- (void)activate;
- (void)invalidate;
- (void)setUserInfo:(id)a0 forConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 serverTarget:(id)a1 serverProtocol:(id)a2 clientProtocol:(id)a3 serviceName:(id)a4 queue:(id)a5 log:(id)a6 entitlement:(id)a7;

@end
