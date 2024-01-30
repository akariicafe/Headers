@interface CryptoKitPrivate.TDMServer : NSObject {
    void /* unknown type, empty encoding */ oprfServer;
    void /* unknown type, empty encoding */ secret;
}

- (id)publicKey;
- (id)info;
- (id)init;
- (void).cxx_destruct;
- (id)evaluateWithBlindedElement:(id)a0 error:(id *)a1;
- (BOOL)verifyTokenWithOutput:(id)a0 TID:(id)a1 FSR:(id)a2;

@end
