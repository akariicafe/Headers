@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PCCLIClient : NSObject <PCActivatable, PCBannerServerXPCInterface, PCDiagnosticServerXPCInterface> {
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)_interrupted;
- (void)invalidate;
- (void)_xpcEnsureStarted;
- (void)dismissBannerWithCompletion:(id /* block */)a0;
- (void)presentBannerWithCompletion:(id /* block */)a0;
- (void)setBannerScaleProgress:(float)a0 completion:(id /* block */)a1;
- (void)tapBannerWithCompletion:(id /* block */)a0;
- (void)stateWithCompletion:(id /* block */)a0;

@end
