@class _TtC17MessageProtection17SKOutgoingRatchet;

@interface MPStatusKitOutgoingRatchet : NSObject

@property (retain, nonatomic) _TtC17MessageProtection17SKOutgoingRatchet *ratchet;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)serializedData;
- (id)currentSubscriptionKeys;
- (BOOL)ratchetForward;
- (id)signingKeyIdentifier;
- (id)sealStatus:(id)a0 authenticating:(id)a1 error:(id *)a2;

@end
