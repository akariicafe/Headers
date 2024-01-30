@class NEIKEv2ESPSPI, NSArray, NEIKEv2EncryptionProtocol, NEIKEv2DHProtocol, NEIKEv2IntegrityProtocol;

@interface NEIKEv2ChildSAProposal : NSObject <NEPrettyDescription, NSCopying> {
    unsigned char _proposalNumber;
    NEIKEv2ESPSPI *_spi;
    NEIKEv2ESPSPI *_remoteSPI;
    NEIKEv2EncryptionProtocol *_chosenEncryptionProtocol;
    NEIKEv2IntegrityProtocol *_chosenIntegrityProtocol;
    NEIKEv2DHProtocol *_chosenDHProtocol;
}

@property unsigned long long protocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *dhProtocols;
@property unsigned long long lifetimeSeconds;
@property BOOL opportunisticPFS;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
