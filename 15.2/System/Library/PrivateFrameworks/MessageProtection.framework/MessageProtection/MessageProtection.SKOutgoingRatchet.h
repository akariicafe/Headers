@interface MessageProtection.SKOutgoingRatchet : NSObject {
    void /* unknown type, empty encoding */ ratchet;
    void /* unknown type, empty encoding */ signingKey;
    void /* unknown type, empty encoding */ currentSubscriptionKey;
    void /* unknown type, empty encoding */ currentMessageKey;
}

+ (id)generate;

- (id)initWithData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)serializedData;
- (id)currentSubscriptionKeys;
- (BOOL)ratchetForward;
- (id)sealMessage:(id)a0 authenticating:(id)a1 error:(id *)a2;
- (id)signingKeyIdentifier;

@end
