@class NSArray, BKSApplicationStateMonitor, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface NSFileAccessProcessManager : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _suspensionHandler;
    NSArray *_urls;
    BKSApplicationStateMonitor *_monitor;
    id _assertionToken;
    int _pendingMessageCount;
}

@property (copy) id /* block */ suspensionHandler;
@property (copy) NSArray *URLs;

+ (BOOL)needToManageConnection:(id)a0 forURLs:(id)a1;

- (id)initWithClient:(id)a0 queue:(id)a1;
- (void)preventSuspensionWithActivityName:(id)a0;
- (void)allowSuspension;
- (void)safelySendMessageWithReplyUsingBlock:(id /* block */)a0;
- (void)_ensureMonitor;
- (void)invalidate;
- (void)dealloc;
- (void)killProcessWithMessage:(id)a0;

@end
