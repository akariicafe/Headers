@class ICDelegationServiceSecuritySettings, NSData, NSMutableData, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, ICDelegationServicePairingSessionDelegate;

@interface ICDelegationServicePairingSession : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableArray *_existingPairingCompletionHandlers;
    NSData *_inputKey;
    NSMutableData *_inputNonce;
    NSData *_outputKey;
    NSMutableData *_outputNonce;
    struct PairingSessionPrivate { } *_pairingSession;
    long long _state;
}

@property (weak, nonatomic) id<ICDelegationServicePairingSessionDelegate> delegate;
@property (readonly, nonatomic) long long role;
@property (readonly, nonatomic) ICDelegationServiceSecuritySettings *securitySettings;

- (void)receievedData:(id)a0;
- (void)getDecryptedDataForEncryptedData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithRole:(long long)a0 securitySettings:(id)a1;
- (void)prepareEncryptedSessionWithCompletionHandler:(id /* block */)a0;
- (void)getEncryptedDataForData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_handlePairingSessionCompletionWithError:(id)a0;
- (void)_receivedData:(id)a0;
- (id)_encryptedDataForData:(id)a0;
- (BOOL)_deriveEncryptionKeysReturningError:(id *)a0;
- (void)_sendData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)dealloc;

@end
