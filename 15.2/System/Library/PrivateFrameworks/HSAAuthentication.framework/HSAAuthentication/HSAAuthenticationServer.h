@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface HSAAuthenticationServer : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;

- (void)_cleanup;
- (void)_clientConnected;
- (void).cxx_destruct;
- (id)init;
- (void)_cleanupClient:(id)a0;
- (void)_configureWithClient:(id)a0;
- (void)dealloc;
- (void)parseIncomingMessageFromNumber:(id)a0 forService:(id)a1 messageBody:(id)a2;

@end
