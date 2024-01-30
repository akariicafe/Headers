@class BSServiceConnectionListener, NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, SBSystemApertureLayoutMonitorServerDelegate;

@interface SBSystemApertureLayoutMonitorServer : NSObject <BSServiceConnectionListenerDelegate, SBSystemApertureLayoutMonitorServerInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientServiceCollectionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _framesCollectionLock;
    NSMutableArray *_connections;
    NSMutableArray *_remoteAssertions;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnectionListener *_connectionListener;
    NSArray *_frames;
    BOOL _isValid;
    id<SBSystemApertureLayoutMonitorServerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionIdentifierWithReason:(id)a0;
- (oneway void)invalidateRestrictSystemApertureLayoutToInertAssertionWithIdentifier:(id)a0;
- (void)_systemApertureLayoutDidChange:(id)a0;
- (void)_notifyConnectedListenersOfUpdatedFrames;

@end
