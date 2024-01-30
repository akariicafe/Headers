@class NSData, RSABSSATokenBlinder;

@interface RSABSSATokenWaitingActivation : NSObject {
    const struct ccrsabssa_ciphersuite { } *_ciphersuite;
}

@property (readonly, retain, nonatomic) NSData *blindingInverse;
@property (readonly, retain, nonatomic) RSABSSATokenBlinder *tokenBlinder;
@property (readonly, retain, nonatomic) NSData *tokenContent;
@property (readonly, retain, nonatomic) NSData *blindedMessage;

- (void).cxx_destruct;
- (id)activateTokenWithServerResponse:(id)a0 error:(id *)a1;
- (id)initWithBlindingInverse:(id)a0 blindedMessage:(id)a1 tokenContent:(id)a2 tokenBlinder:(id)a3 ciphersuite:(const struct ccrsabssa_ciphersuite { } *)a4;

@end
