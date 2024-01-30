@class NSString;

@interface DAKeyPairingSession : DASession <KmlOwnerPairingCallbacks, NSSecureCoding, DAKeyTrackingUpdate, DAKeyImmobilizerTokenUpdate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didEnd:(id)a0;
- (id)preWarmForManufacturer:(id)a0;
- (id)startProbing;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)setTrackingReceipt:(id)a0 forKeyWithIdentifier:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)startKeyPairingWithPassword:(id)a0 displayName:(id)a1 transport:(long long)a2 uuid:(id)a3;
- (void)requestImmobilizerTokenRefillForKeyWithIdentifier:(id)a0 callback:(id /* block */)a1;
- (void)setImmobilizerTokens:(id)a0 publicKey:(id)a1 forKeyWithIdentifier:(id)a2 callback:(id /* block */)a3;
- (void)didStart:(BOOL)a0;
- (void)handleKeyPairingCompletionResult:(id)a0 keyInformation:(id)a1 trackingRequest:(id)a2;
- (void)handleFirstTransactionCompletionResult:(id)a0;
- (void)handlePreWarmCompletionResult:(id)a0;
- (void)handleProbingCompletionResult:(BOOL)a0;
- (void)handlePairingDidStart;

@end
