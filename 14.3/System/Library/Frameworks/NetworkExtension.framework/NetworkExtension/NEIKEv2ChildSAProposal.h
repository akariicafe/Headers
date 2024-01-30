@class NEIKEv2ESPSPI, NEIKEv2EncryptionProtocol, NEIKEv2DHProtocol, NSArray, NEIKEv2IntegrityProtocol;

@interface NEIKEv2ChildSAProposal : NSObject <NSCopying>

@property unsigned char proposalNumber;
@property (retain) NEIKEv2ESPSPI *spi;
@property (retain) NEIKEv2ESPSPI *remoteSPI;
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol;
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol;
@property (retain) NEIKEv2DHProtocol *chosenDHProtocol;
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property unsigned long long protocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *dhProtocols;
@property unsigned long long lifetimeSeconds;
@property BOOL opportunisticPFS;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAValidResponse;
- (id)copyForRekey;
- (id)copyFromRemote:(id)a0 checkDHGroup:(BOOL)a1;
- (BOOL)matchesProposal:(id)a0 checkDHGroup:(BOOL)a1;
- (id)description;

@end
