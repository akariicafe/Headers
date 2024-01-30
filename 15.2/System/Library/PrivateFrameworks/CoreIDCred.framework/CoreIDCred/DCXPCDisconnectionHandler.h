@class NSString, NSMutableDictionary;

@interface DCXPCDisconnectionHandler : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) NSString *name;
@property (retain) NSMutableDictionary *disconnectionCallbacks;
@property (retain) NSMutableDictionary *disconnectionResultCallbacks;
@property (retain) NSMutableDictionary *disconnectionOptionCallbacks;
@property (retain) NSString *disconnectionErrorDomain;
@property long long disconnectionErrorCode;
@property BOOL isDisconnected;

- (void)handleInterruption;
- (id)registerCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (id)createDaemonDisconnectedError;
- (id)initWithName:(id)a0 errorDomain:(id)a1 errorCode:(long long)a2;
- (void)configureHandlersForConnection:(id)a0;
- (void)unregisterCallback:(id)a0;
- (id)registerResultCallback:(id /* block */)a0;
- (void)unregisterResultCallback:(id)a0;
- (id)registerOptionResultCallback:(id /* block */)a0;
- (void)unregisterOptionResultCallback:(id)a0;
- (id)randomCallbackIdentifier;

@end
