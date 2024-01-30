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
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handleCallback:(id)a0;
- (id)_lazyConnection;
- (void)_killConnection;
- (BOOL)runScriptFile:(id)a0;

@end
