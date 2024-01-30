@class NEIKEv2EncryptionProtocol, NEIKEv2DHProtocol, NEIKEv2PRFProtocol, NEIKEv2IntegrityProtocol, NEIKEv2AuthenticationProtocol, NSArray;

@interface NEIKEv2IKESAProposal : NSObject <NSCopying>

@property unsigned char proposalNumber;
@property (retain) NEIKEv2EncryptionProtocol *chosenEncryptionProtocol;
@property (retain) NEIKEv2IntegrityProtocol *chosenIntegrityProtocol;
@property (retain) NEIKEv2PRFProtocol *chosenPRFProtocol;
@property (retain) NEIKEv2DHProtocol *chosenDHProtocol;
@property (readonly) NEIKEv2EncryptionProtocol *encryptionProtocol;
@property (readonly) NEIKEv2IntegrityProtocol *integrityProtocol;
@property (readonly) NEIKEv2PRFProtocol *prfProtocol;
@property (readonly) NEIKEv2DHProtocol *dhProtocol;
@property (readonly) BOOL hasEAPMethods;
@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property (retain) NSArray *encryptionProtocols;
@property (retain) NSArray *integrityProtocols;
@property (retain) NSArray *prfProtocols;
@property (retain) NSArray *dhProtocols;
@property (retain) NSArray *eapProtocols;
@property unsigned long long lifetimeSeconds;

+ (id)chooseSAProposalFromLocalProposals:(id)a0 remoteProposals:(id)a1 preferRemoteProposals:(BOOL)a2;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (unsigned long long)lifetimeSecondsBeyondSoftLifetimeForInitiator:(BOOL)a0;
- (BOOL)isAValidResponse;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)softLifetimeSecondsForInitiator:(BOOL)a0;
- (BOOL)matchesProposal:(id)a0;
- (id)copyFromRemote:(id)a0 preferRemoteProposal:(BOOL)a1;

@end
