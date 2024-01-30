@class NSSet, NSObject;
@protocol OS_os_log;

@interface GTXPCDispatcher : NSObject <GTXPCDispatcher> {
    NSObject<OS_os_log> *_log;
    NSSet *_protocolMethods;
}

- (void).cxx_destruct;
- (void)dispatchMessage:(id)a0 replyConnection:(id)a1;
- (id)initWithProtocolMethods:(id)a0;

@end
