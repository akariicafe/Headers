@class PRSServerPosterIdentity, NSString, NSMutableDictionary, BSServiceConnection, RBSAssertion;
@protocol BSServiceConnectionClient;

@interface PRSWallpaperObserver : NSObject <PRSWallpaperObserving, BSInvalidatable> {
    NSString *_explanation;
    BSServiceConnection<BSServiceConnectionClient> *_lock_connection;
    id /* block */ _lock_pathHandler;
    id /* block */ _lock_snapshotHandler;
    unsigned long long _observed;
    NSString *_active_observedDescription;
    RBSAssertion *_lock_initialUpdateAssertion;
    PRSServerPosterIdentity *_conn_identityLocations[4];
    NSMutableDictionary *_conn_configurationByIdentity;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientActivated;
    BOOL _lock_invalidated;
    BOOL _lock_initialLocationStateUpdateWasSent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_lock_invalidate;
- (oneway void)notifyWallpaperUpdates:(id)a0;
- (void)dealloc;
- (id)init;
- (oneway void)notifySnapshotUpdates:(id)a0;
- (void)activateWithConfiguration:(id)a0;
- (void)invalidate;
- (id)initWithExplanation:(id)a0;
- (void).cxx_destruct;

@end
