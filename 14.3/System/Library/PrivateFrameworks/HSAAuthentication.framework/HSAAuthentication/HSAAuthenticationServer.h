@class NSMutableArray, NSObject;
@protocol OS_xpc_object;

@interface HSAAuthenticationServer : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_clients;
    BOOL _hasRegistered;
}

+ (id)sharedInstance;

- (id)init;
- (void)_cleanup;
- (void)_clientConnected;
- (void)dealloc;
- (void)_configureWithClient:(id)a0;
- (void)_cleanupClient:(id)a0;
- (void)parseIncomingMessageFromNumber:(id)a0 forService:(id)a1 messageBody:(id)a2;

@end
