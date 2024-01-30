@class NSDictionary, NSXPCInterface, NSBlock, NSObject;
@protocol OS_dispatch_semaphore;

@interface _NSXPCConnectionExpectedReplyInfo : NSObject {
    NSBlock *_replyBlock;
    id /* block */ _errorBlock;
    NSObject<OS_dispatch_semaphore> *_timeoutSemaphore;
    SEL _selector;
    NSXPCInterface *_interface;
    NSDictionary *_userInfo;
    unsigned long long _proxyNumber;
}

- (void)dealloc;

@end
