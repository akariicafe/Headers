@class SCROConnection, SCRCTargetSelectorTimer, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

@property (class, readonly) SCROScriptClient *sharedClient;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue;

- (void)handleCallback:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isReady;
- (void)_killConnection;
- (BOOL)_runAsyncWithConnection:(int)a0 object:(id)a1;
- (id)_lazyConnection;
- (BOOL)runScriptFile:(id)a0;
- (BOOL)runShortcutWithIdentifier:(id)a0;

@end
