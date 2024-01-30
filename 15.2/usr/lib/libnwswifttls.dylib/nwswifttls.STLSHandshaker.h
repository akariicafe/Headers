@interface nwswifttls.STLSHandshaker : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
}

- (void).cxx_destruct;
- (id)init;
- (id)continueHandshake:(id)a0;
- (long long)getNegotiatedCiphersuite;
- (id)getPeerQUICTransportParameters;
- (long long)getEncryptionLevel;
- (id)getClientRandom;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3;
- (id)startHandshake;
- (long long)isImplemented;

@end
