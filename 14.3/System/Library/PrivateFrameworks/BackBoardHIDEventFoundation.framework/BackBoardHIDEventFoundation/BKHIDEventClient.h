@class NSString, BSMachPortSendRight, BSProcessDeathWatcher, NSObject, BSPortDeathSentinel;
@protocol OS_dispatch_queue, BKHIDEventClientDelegate;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> *_queue;
    id<BKHIDEventClientDelegate> _queue_delegate;
    BSProcessDeathWatcher *_queue_pidWatcher;
    BSPortDeathSentinel *_queue_portSentinel;
    NSString *_queue_procName;
    BOOL _queue_invalidated;
}

@property (weak, nonatomic) id<BKHIDEventClientDelegate> delegate;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) BSMachPortSendRight *sendRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithPid:(int)a0 sendRight:(id)a1 queue:(id)a2 processName:(id)a3;
- (id)initWithPid:(int)a0 sendRight:(id)a1 queue:(id)a2;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_queue_invalidate;
- (BOOL)_deathByPid;
- (id)initWithPid:(int)a0 sendRight:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)_queue_performDelegateCallout:(id /* block */)a0;
- (BOOL)_deathBySendRight;
- (void)invalidate;

@end
