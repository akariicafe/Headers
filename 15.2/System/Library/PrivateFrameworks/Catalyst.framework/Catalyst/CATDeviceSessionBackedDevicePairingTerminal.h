@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject <CATSharingDevicePairingTerminal> {
    id<CATSharingDeviceSession> mDeviceSession;
    id /* block */ mVerifyPairingCompletion;
    id /* block */ mBeginPairingCompletion;
    id /* block */ mPINPromptHandler;
}

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) CATSharingDevice *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)_tryPIN:(id)a0;
- (void)_invalidate;
- (void)tryPIN:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)a0;
- (void)_beginPairing:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (void)addSessionHandlers;
- (void)pairingCompleteWithError:(id)a0;
- (void)removeSessionHandlers;
- (void)deviceSessionInvalidated:(id)a0;
- (void)deviceSessionEncounteredError:(id)a0;
- (void)deviceSessionReady;
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)a0;
- (void)verifyPairing;
- (void)verifyPairingFinished:(BOOL)a0;
- (void)fetchStableIdentifier;
- (void)fetchStableIdentifierFinished:(id)a0;
- (void)vendConnectionForCompletion:(id /* block */)a0;
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(id /* block */)a0;
- (void)beginPairing:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (id)initWithDeviceSession:(id)a0;

@end
