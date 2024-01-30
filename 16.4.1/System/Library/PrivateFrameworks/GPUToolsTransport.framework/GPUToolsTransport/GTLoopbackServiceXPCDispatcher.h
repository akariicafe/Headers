@protocol GTLoopbackService;

@interface GTLoopbackServiceXPCDispatcher : GTXPCDispatcher <GTLoopbackServiceXPCDispatcher> {
    id<GTLoopbackService> _service;
}

- (void).cxx_destruct;
- (void)echo_:(id)a0 replyConnection:(id)a1;
- (void)echo_completionHandler_:(id)a0 replyConnection:(id)a1;
- (void)echo_repeat_callback_:(id)a0 replyConnection:(id)a1;
- (void)echo_repeat_callback_complete_:(id)a0 replyConnection:(id)a1;
- (id)initWithService:(id)a0 properties:(id)a1;

@end
