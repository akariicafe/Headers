@class NSString, NSHashTable, _DBWorkspaceStateChangeSession, NSMutableArray;
@protocol DBWorkspaceOwner, BSInvalidatable, DBWorkspaceState;

@interface DBWorkspace : NSObject <BSInvalidatable> {
    id<DBWorkspaceOwner> _owner;
    BOOL _invalidated;
    NSHashTable *_observers;
    NSMutableArray *_pendingRequests;
    _DBWorkspaceStateChangeSession *_currentSession;
    id<BSInvalidatable> _pendingRequestsStateCaptureBlock;
}

@property (retain, nonatomic, setter=_setState:) id<DBWorkspaceState> state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (id)initWithOwner:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateSession:(id)a0;
- (void)requestStateChange:(id)a0;
- (id)_createStateChangeSession;

@end
