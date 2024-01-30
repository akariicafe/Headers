@class NSString, NSObject;
@protocol OS_dispatch_queue, BSServiceDispatchingQueue;

@interface BSXPCServiceConnectionMessage : BSXPCCoder <BSXPCServiceConnectionMessage, BSInvalidatable> {
    int _sendFlag;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id /* block */ _completion;
    id<BSServiceDispatchingQueue> _replyQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)sendSynchronously;
- (BOOL)expectsReply;
- (id)sendSynchronouslyWithError:(out id *)a0;
- (BOOL)send;
- (id)initWithMessage:(id)a0;
- (id)createReply;
- (void)invalidate;

@end
