@class NSString, TRTransferBrowser, TRDeviceSetupPeripheral;
@protocol TRDeviceSetupBrowserDelegate;

@interface TRDeviceSetupBrowser : NSObject <TRTransferBrowserDelegate>

@property (retain, nonatomic) TRTransferBrowser *transferBrowser;
@property (retain, nonatomic) TRDeviceSetupPeripheral *peripheral;
@property (weak, nonatomic) id<TRDeviceSetupBrowserDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)browserDidDisconnect:(id)a0;
- (void)browserDidChangeState:(id)a0;
- (void)browser:(id)a0 didReceiveData:(id)a1 replyHandler:(id /* block */)a2;
- (void)start;
- (void)defer;
- (void).cxx_destruct;
- (id)init;
- (void)browser:(id)a0 didStartTransferWithSendDataHandler:(id /* block */)a1;
- (void)stop;

@end
