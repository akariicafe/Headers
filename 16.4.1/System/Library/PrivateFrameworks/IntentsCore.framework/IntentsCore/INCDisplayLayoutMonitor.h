@class FBSDisplayLayoutMonitor, NSMutableDictionary, NSDictionary, NSString, FBSDisplayMonitor;

@interface INCDisplayLayoutMonitor : NSObject <FBSDisplayObserving>

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) BOOL alive;
@property (readonly, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (readonly, nonatomic) NSMutableDictionary *layoutMonitorsByIdentity;
@property (readonly, nonatomic) FBSDisplayLayoutMonitor *singleDisplayLayoutMonitor;
@property (copy, nonatomic) id /* block */ transitionHandler;
@property (readonly, nonatomic) NSDictionary *currentDisplayLayouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)displayMonitor:(id)a0 didUpdateIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displayMonitor:(id)a0 didConnectIdentity:(id)a1 withConfiguration:(id)a2;
- (void)displayMonitor:(id)a0 willDisconnectIdentity:(id)a1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)resume;
- (void)lock_invalidate;
- (void)executeBlockWithLock:(id /* block */)a0;
- (BOOL)hasRenderServerAccess;
- (BOOL)lock_alive;
- (id)lock_currentDisplayLayouts;
- (id)lock_layoutMonitorsByIdentity;
- (void)lock_resume;
- (void)lock_startLayoutMonitorForDisplay:(id)a0;
- (BOOL)platformSupportsMultipleDisplays;
- (void)setLayoutMonitorsByIdentity:(id)a0;
- (BOOL)shouldObserveMultipleDisplays;

@end
