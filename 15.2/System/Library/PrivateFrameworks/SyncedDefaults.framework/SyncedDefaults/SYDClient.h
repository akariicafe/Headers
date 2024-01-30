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
- (void).cxx_destruct;
- (void)_createConnectionIfNecessary;
- (void)_resetConnection;
- (id)initWithQueue:(id)a0 bundleIdentifier:(struct __CFString { } *)a1 storeIdentifier:(struct __CFString { } *)a2 additionalSource:(BOOL)a3;
- (id)_newMessageWithName:(id)a0 userInfo:(id)a1;
- (void)_sendMessageNoReply:(id)a0;
- (id)_sendMessageWithReplySync:(id)a0;
- (void)_sendMessage:(id)a0 replyHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 bundleIdentifier:(struct __CFString { } *)a1 storeIdentifier:(struct __CFString { } *)a2;
- (void)sendMessageWithName:(id)a0;
- (id)sendMessageWithName:(id)a0 userInfo:(id)a1;
- (void)sendMessageWithName:(id)a0 replyHandler:(id /* block */)a1;
- (void)sendMessageWithName:(id)a0 userInfo:(id)a1 replyHandler:(id /* block */)a2;

@end
