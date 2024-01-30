@class NSXPCListener, NSString;

@interface PowerUISmartChargeManagerUnsupported : NSObject <NSXPCListenerDelegate, PowerUISmartChargeManaging>

@property (retain, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)resetDevelopmentMode;
- (void)simulateCurrentOutputAsOfDate:(id)a0 overrideAllSignals:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)statusWithHandler:(id /* block */)a0;
- (void)fullChargeDeadlineWithHandler:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)isOBCEngagedWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)enterDevelopmentMode;
- (void)shouldMCMBeDisplayedWithHandler:(id /* block */)a0;
- (id)init;
- (void)forceModelUpdate;
- (void)powerLogStatusWithHandler:(id /* block */)a0;
- (void)isOBCSupportedWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setMCMState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)isMCMCurrentlyEnabledWithHandler:(id /* block */)a0;
- (void)client:(id)a0 setState:(unsigned long long)a1 withHandler:(id /* block */)a2;
- (void)isSmartChargingCurrentlyEnabledWithHandler:(id /* block */)a0;

@end
