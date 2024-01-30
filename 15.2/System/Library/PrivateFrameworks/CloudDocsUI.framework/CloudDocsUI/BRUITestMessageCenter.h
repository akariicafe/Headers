@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BRUITestMessageCenter : NSObject {
    NSMutableDictionary *_pendingReplies;
    NSMutableDictionary *_messageHandlers;
    NSObject<OS_dispatch_queue> *_messageQueue;
    BOOL _started;
    BOOL _isSender;
}

+ (id)defaultCenter;

- (void)didReceiveMessage:(id)a0;
- (void)setHandler:(id)a0 forMessageNamed:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)stop;
- (void)_sendMessageNamed:(id)a0 userInfo:(id)a1 isReply:(BOOL)a2 messageUUID:(id)a3 reply:(id /* block */)a4;
- (void)startSender;
- (void)startReceiver;
- (void)sendMessageNamed:(id)a0 userInfo:(id)a1 reply:(id /* block */)a2;

@end
