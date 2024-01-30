@class NSString, NSDictionary, BSServiceManager, NSMutableSet;
@protocol BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

@interface BSServiceConnectionEndpointMonitor : NSObject <BSServiceMonitor, BSInvalidatable> {
    BSServiceManager *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
    NSDictionary *_lock_endpointToEnvironments;
    NSMutableSet *_lock_serialCallOut_endpoints;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
    id<BSInvalidatable> _registrationLock_assertion;
}

@property (readonly, copy, nonatomic) NSString *service;
@property (retain, nonatomic) id<BSServiceConnectionEndpointMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorForService:(id)a0;

- (void)serialCallOut_didUpdateEndpointEnvironments:(id)a0;
- (void)dealloc;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (id)endpointsForEnvironment:(id)a0;

@end
