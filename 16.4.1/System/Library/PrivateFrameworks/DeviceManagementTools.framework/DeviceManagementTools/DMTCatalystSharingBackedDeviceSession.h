@class DMTSharingDevice, CATSharingDevice, NSString, SFSession, NSObject;
@protocol OS_dispatch_queue;

@interface DMTCatalystSharingBackedDeviceSession : NSObject <CATSharingDeviceSession>

@property (readonly, nonatomic) DMTSharingDevice *device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly, nonatomic) SFSession *session;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic, getter=isReady) BOOL ready;
@property (readonly, nonatomic) CATSharingDevice *remoteDevice;
@property (copy) id /* block */ pinPromptHandler;
@property (copy) id /* block */ deviceSessionReadyHandler;
@property (copy) id /* block */ messageReceivedHandler;
@property (copy) id /* block */ deviceSessionInvalidatedHandler;
@property (copy) id /* block */ deviceSessionErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)failureTypeForPairingError:(id)a0;

- (id)initWithDevice:(id)a0;
- (void)deactivate;
- (void)invalidateWithError:(id)a0;
- (void)sendMessage:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)addPrimitiveHandlers;
- (void)beginPairWithCompletion:(id /* block */)a0;
- (void)removePrimitiveHandlers;
- (void)tryPairingPIN:(id)a0;
- (void)verifyPairing:(id /* block */)a0;

@end
