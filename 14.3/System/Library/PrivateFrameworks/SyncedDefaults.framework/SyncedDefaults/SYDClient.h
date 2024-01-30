@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SYDClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSString *_bundleIdentifier;
    NSString *_storeIdentifier;
    BOOL _additionalSource;
}

- (void)shutdown;
- (id)_newMessageWithName:(id)a0 userInfo:(id)a1;
- (void)_sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 bundleIdentifier:(struct __CFString { } *)a1 storeIdentifier:(struct __CFString { } *)a2;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 bundleIdentifier:(struct __CFString { } *)a1 storeIdentifier:(struct __CFString { } *)a2 additionalSource:(BOOL)a3;
- (void)_createConnectionIfNecessary;
- (void)sendMessageWithName:(id)a0 userInfo:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendMessageWithName:(id)a0;
- (id)sendMessageWithName:(id)a0 userInfo:(id)a1;
- (void)_sendMessageNoReply:(id)a0;
- (void)_resetConnection;
- (id)_sendMessageWithReplySync:(id)a0;
- (void)sendMessageWithName:(id)a0 replyHandler:(id /* block */)a1;

@end
