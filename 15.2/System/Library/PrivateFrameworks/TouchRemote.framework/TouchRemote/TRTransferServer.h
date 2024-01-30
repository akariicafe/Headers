@class NSString, WPTransfer, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, TRTransferServerDelegate;

@interface TRTransferServer : NSObject <WPTransferDelegate> {
    struct { struct _CCCryptor *x0; unsigned char x1[16]; unsigned char x2[16]; unsigned long long x3; } *_aesContext;
    BOOL _didSendData;
    struct AirPlayPairingSessionPrivate { } *_pairingSession;
    long long _pairingState;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_responseSemaphore;
    BOOL _started;
    BOOL _waitingOnSemaphore;
    long long _advertiserState;
    WPTransfer *_transferSession;
}

@property (weak, nonatomic) id<TRTransferServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)_runVerifyStepWithInput:(const void *)a0 inputLength:(unsigned long long)a1 outputData:(id *)a2;
- (void)transferDidUpdateScannerState:(id)a0;
- (void)transferDidFailToStartScanning:(id)a0;
- (void)start;
- (void)transferDidUpdateAdvertiserState:(id)a0;
- (void)transferDidFailToStartAdvertising:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)_runSetupStepWithInput:(const void *)a0 inputLength:(unsigned long long)a1 outputData:(id *)a2;
- (void)transferComplete;
- (void)dealloc;
- (void)transferDidFailWithError:(id)a0;
- (id)transferDidReceiveData:(id)a0;
- (void)stop;
- (void)_beginAdvertisingIfPowered;
- (id)_onQueue_didReceiveEncryptedData:(id)a0;
- (void)_onQueue_didFinishPairing;

@end
