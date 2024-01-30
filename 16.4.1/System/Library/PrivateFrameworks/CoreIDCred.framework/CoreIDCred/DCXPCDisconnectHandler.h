@class NSString, NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface DCXPCDisconnectHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSString *name;
@property (retain) NSMutableDictionary *disconnectCallbacks;
@property (retain) NSMutableDictionary *disconnectResultCallbacks;
@property (retain) NSMutableDictionary *disconnectOptionCallbacks;
@property (retain) NSString *disconnectErrorDomain;
@property long long disconnectErrorCode;
@property (readonly) NSObject<OS_os_log> *logger;
@property BOOL isDisconnected;

- (id)registerCallback:(id /* block */)a0;
- (void)handleInterruption;
- (void).cxx_destruct;
- (void)unregisterOptionResultCallback:(id)a0;
- (void)configureHandlersForConnection:(id)a0;
- (id)createDaemonDisconnectedError;
- (id)initWithName:(id)a0 errorDomain:(id)a1 errorCode:(long long)a2 logger:(id)a3;
- (id)randomCallbackIdentifier;
- (id)registerOptionResultCallback:(id /* block */)a0;
- (id)registerResultCallback:(id /* block */)a0;
- (void)unregisterCallback:(id)a0;
- (void)unregisterResultCallback:(id)a0;

@end
