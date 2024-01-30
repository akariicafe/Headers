@class NSArray, NEIKEv2EncryptionProtocol, NEIKEv2PRFProtocol, NEIKEv2IntegrityProtocol, NEIKEv2DHProtocol, NEIKEv2AuthenticationProtocol;

@interface NEIKEv2IKESAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2PRFProtocol *_chosenPRFProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
    NEIKEv2AuthenticationProtocol *_authenticationProtocol;
}

@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *prfProtocols;
@property (retain) NSArray *dhProtocols;
@property (retain) NSArray *eapProtocols;
@property unsigned long long lifetimeSeconds;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
