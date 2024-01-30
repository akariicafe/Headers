@class NSString, WPTransfer, NSObject;
@protocol TRTransferBrowserDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface TRTransferBrowser : NSObject <WPTransferDelegate> {
    struct { struct _CCCryptor *x0; unsigned char x1[16]; unsigned char x2[16]; unsigned long long x3; } *_aesContext;
    struct AirPlayPairingSessionPrivate { } *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    BOOL _started;
    BOOL _waitingOnSemaphore;
    long long _scannerState;
    WPTransfer *_transferSession;
}

@property (weak, nonatomic) id<TRTransferBrowserDelegate> delegate;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_didReceiveEncryptedData:(id)a0;
- (int)_runVerifyStepWithInput:(const void *)a0 inputLength:(unsigned long long)a1 outputData:(id *)a2;
- (void)transferDidUpdateScannerState:(id)a0;
- (void)transferDidFailToStartScanning:(id)a0;
- (void)_didFinishPairing;
- (void)start;
- (void)transferDidUpdateAdvertiserState:(id)a0;
- (void)transferDidFailToStartAdvertising:(id)a0;
- (void)defer;
- (void).cxx_destruct;
- (id)init;
- (int)_runSetupStepWithInput:(const void *)a0 inputLength:(unsigned long long)a1 outputData:(id *)a2;
- (void)transferComplete;
- (void)dealloc;
- (void)_beginScanningIfPowered;
- (void)transferDidFailWithError:(id)a0;
- (id)transferDidReceiveData:(id)a0;
- (void)stop;

@end
