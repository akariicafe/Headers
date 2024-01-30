@class NSLock, _UIViewServiceReplyAwaitingTrampoline, _UIViewServiceReplyControlTrampoline;

@interface _UIViewServiceReplyControlProxy : NSObject <_UIViewServiceProxy_ReplyControl> {
    id _target;
    _UIViewServiceReplyControlTrampoline *_controlTrampoline;
    _UIViewServiceReplyAwaitingTrampoline *_awaitingTrampoline;
    NSLock *_lock;
}

+ (id)proxyWithTarget:(id)a0;

- (id)_awaitingReply;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)_deliveringRepliesAsynchronously;
- (void).cxx_destruct;
- (BOOL)respondsToSelector:(SEL)a0;

@end
