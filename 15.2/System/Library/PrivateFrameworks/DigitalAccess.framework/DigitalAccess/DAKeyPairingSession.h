@class NSString;

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)didEnd:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)startProbing;
- (id)preWarmForManufacturer:(id)a0;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1 transport:(long long)a2;
- (id)setTrackingReceipt:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 forKeyWithIdentifier:(id)a4;
- (void)didStart:(BOOL)a0;
- (void)handleKeyPairingCompletionResult:(id)a0 keyInformation:(id)a1 trackingRequest:(id)a2;
- (void)handleFirstTransactionCompletionResult:(id)a0;
- (void)handlePreWarmCompletionResult:(id)a0;
- (void)handleProbingCompletionResult:(BOOL)a0;
- (void)handlePairingDidStart;
- (id)setTrackingReceipt:(id)a0 forKeyWithIdentifier:(id)a1;
- (void)endPointPrivacyDecryption:(id)a0 encryptedData:(id)a1 publicKey:(id)a2 callback:(id /* block */)a3;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setImmobilizerTokens:(id)a0 publicKey:(id)a1 forKeyWithIdentifier:(id)a2 callback:(id /* block */)a3;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1;

@end
