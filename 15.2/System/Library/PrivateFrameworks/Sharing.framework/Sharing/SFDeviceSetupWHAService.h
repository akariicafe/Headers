@class SFService, SFSession, NSObject, SFDeviceOperationHandlerCDPSetup;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHAService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _prefCDPEnabled;
    SFService *_sfService;
    SFSession *_sfSession;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL needsCDPRepair;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void)_cleanup;
- (void)_handleSessionStarted:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)a0;
- (void)_handleInfoExchange:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleRequest:(id)a0 flags:(unsigned int)a1 session:(id)a2 responseHandler:(id /* block */)a3;
- (void)invalidate;
- (void)dealloc;

@end
