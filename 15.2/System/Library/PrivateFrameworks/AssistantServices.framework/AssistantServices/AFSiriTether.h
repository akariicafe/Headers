@class NSMutableArray, AFInstanceContext, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AFSiriTether : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    AFInstanceContext *_instanceContext;
    BOOL _isAttached;
    id /* block */ _attachmentStatusChangedHandler;
    NSMutableArray *_pendingEvents;
    int _notifyToken;
}

- (id)initWithInstanceContext:(id)a0;
- (id)_connection;
- (void)attach:(id /* block */)a0;
- (void)_attach:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_connectionInterrupted:(id)a0;
- (void)_connectionInvalid:(id)a0;
- (void)_attachmentStatusUpdate:(BOOL)a0;
- (void)_listenForLaunchNotification;
- (void)waitForAttachment:(double)a0;
- (void)setAttachmentStatusChangedHandler:(id /* block */)a0;
- (void)_logEvent:(id)a0;

@end
