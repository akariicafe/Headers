@protocol SidecarSessionDelegate, SidecarServicePresenterDelegate;

@interface SidecarCoreProxy : NSObject <SidecarCore_Interface>

@property (class, readonly) SidecarCoreProxy *defaultProxy;

@property (retain, nonatomic) id<SidecarSessionDelegate> delegate;
@property (retain, nonatomic) id<SidecarServicePresenterDelegate> presenterDelegate;

- (void).cxx_destruct;
- (void)relayPresenterServiceExtensionReady:(id)a0;
- (void)relayPresenterStartServiceExtension:(id)a0 completion:(id /* block */)a1;
- (void)relaySession:(long long)a0 closedWithError:(id)a1;
- (void)relaySession:(id)a0 openedByDevice:(id)a1 dataLink:(long long)a2 service:(id)a3;
- (void)relaySession:(long long)a0 receivedOPACKData:(id)a1 dataLink:(long long)a2;
- (void)relaySession:(long long)a0 stream:(id)a1 status:(unsigned long long)a2;
- (void)relayTerminateService;

@end
