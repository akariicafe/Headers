@class NSString, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface RPLegacyService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_requestMap;
    struct BonjourAdvertiserPrivate { } *_bonjourAdvertiser;
    int _listenerPort;
    int _tcpSockV4;
    int _tcpSockV6;
}

@property (nonatomic) unsigned int advertiseRate;
@property (nonatomic) unsigned char deviceActionType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL needsSetup;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSDictionary *txtDictionary;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ sessionStartedHandler;
@property (copy, nonatomic) id /* block */ sessionEndedHandler;
@property (copy, nonatomic) id /* block */ showPINHandler;
@property (copy, nonatomic) id /* block */ hidePINHandler;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)dealloc;
- (void)registerRequestID:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (id)description;
- (void)_invalidate;
- (void)invalidate;
- (int)_tcpStart;
- (int)_bonjourUpdateService;
- (int)_bonjourUpdateTXT;

@end
