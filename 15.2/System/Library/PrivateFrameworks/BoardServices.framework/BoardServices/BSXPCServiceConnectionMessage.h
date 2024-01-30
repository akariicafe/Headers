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

- (BOOL)send;
- (BOOL)sendSynchronously;
- (BOOL)expectsReply;
- (id)initWithMessage:(id)a0;
- (id)createReply;
- (id)sendSynchronouslyWithError:(out id *)a0;
- (void).cxx_destruct;
- (void)invalidate;

@end
