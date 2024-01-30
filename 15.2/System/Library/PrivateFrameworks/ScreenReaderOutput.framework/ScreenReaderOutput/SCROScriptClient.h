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

- (BOOL)_isReady;
- (void).cxx_destruct;
- (id)init;
- (void)handleCallback:(id)a0;
- (void)dealloc;
- (id)_lazyConnection;
- (void)_killConnection;
- (BOOL)_runAsyncWithConnection:(int)a0 object:(id)a1;
- (BOOL)runScriptFile:(id)a0;
- (BOOL)runShortcutWithIdentifier:(id)a0;

@end
