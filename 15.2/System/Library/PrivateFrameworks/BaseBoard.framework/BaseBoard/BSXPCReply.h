@class NSObject;
@protocol OS_xpc_object;

@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> *_reply;
    int _sent;
}

+ (id)messageWithReply:(id)a0;
+ (id)replyForMessage:(id)a0;

- (id)message;
- (void)sendReply:(id /* block */)a0;
- (id)initForMessage:(id)a0;
- (void).cxx_destruct;
- (long long)messageKind;
- (id)initWithReply:(id)a0;

@end
