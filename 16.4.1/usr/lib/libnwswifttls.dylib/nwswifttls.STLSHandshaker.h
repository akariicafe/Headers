@interface nwswifttls.STLSHandshaker : NSObject {
    void /* unknown type, empty encoding */ stateMachine;
    void /* unknown type, empty encoding */ partialHandshakeResult;
}

- (id)init;
- (void).cxx_destruct;
- (id)getClientRandom;
- (id)continueHandshake:(id)a0;
- (long long)getEncryptionLevel;
- (id)getEncryptionSecretWithWrite:(BOOL)a0;
- (long long)getNegotiatedCiphersuite;
- (id)getPeerQUICTransportParameters;
- (id)init:(id)a0 serverName:(id)a1 quicTransportParameters:(id)a2 alpn:(id)a3 ticketRequest:(id)a4;
- (long long)isImplemented;
- (id)startHandshake;

@end
