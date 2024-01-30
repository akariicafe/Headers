@class NSError, NSData, NSArray, NEIKEv2ESPSPI, NEIKEv2IKESA, NEIKEv2ChildSAProposal, NSMutableData, NEIKEv2ChildSAConfiguration;

@interface NEIKEv2ChildSA : NSObject {
    union { union { struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey256[9]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey384[13]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey521[19]; } dhECPKey; union { unsigned char dhCurveKey25519[32]; } dhCurveKey; } _dhECKey;
}

@property (weak) NEIKEv2IKESA *ikeSA;
@property unsigned int childID;
@property (retain) NEIKEv2ChildSAConfiguration *configuration;
@property unsigned long long state;
@property (retain) NSError *error;
@property BOOL shouldSendStateUpdate;
@property unsigned short incomingDatabaseReqID;
@property unsigned short outgoingDatabaseReqID;
@property BOOL isFirstChild;
@property BOOL isInitiator;
@property (readonly) BOOL isRekeying;
@property (retain) NEIKEv2ChildSAProposal *chosenProposal;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;
@property (retain) NSArray *initiatorTrafficSelectors;
@property (retain) NSArray *responderTrafficSelectors;
@property (retain) NSData *localNonce;
@property (retain) NSData *remoteNonce;
@property (retain) NSData *initiatorNonce;
@property (retain) NSData *responderNonce;
@property (retain) NSMutableData *dhPublicKey;
@property (retain) NSData *dhRemotePublicKey;
@property struct OpaqueSecDHContext { } *dhContext;
@property unsigned long long dhPublicKeySize;
@property (retain) NSMutableData *incomingEncryptionKey;
@property (retain) NSMutableData *incomingIntegrityKey;
@property (retain) NSMutableData *outgoingEncryptionKey;
@property (retain) NSMutableData *outgoingIntegrityKey;
@property (retain) NSMutableData *initiatorSendEncryptionKey;
@property (retain) NSMutableData *initiatorSendIntegrityKey;
@property (retain) NSMutableData *responderSendEncryptionKey;
@property (retain) NSMutableData *responderSendIntegrityKey;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyProposal;
@property (retain) NEIKEv2ChildSAProposal *initiatorRekeyNonPFSProposal;
@property (retain) NEIKEv2ChildSAProposal *responderRekeyProposal;
@property (retain) NEIKEv2ESPSPI *rekeyedSPI;
@property (retain) NEIKEv2ESPSPI *rekeyedRemoteSPI;
@property (readonly) NSArray *configuredInitiatorTrafficSelectors;
@property (readonly) NSArray *configuredResponderTrafficSelectors;
@property BOOL sequencePerTrafficClassSupported;

+ (unsigned short)nextDatabaseReqID;

- (BOOL)generateLocalDHValues;
- (BOOL)generateLocalNonce;
- (BOOL)generateLocalValues;
- (BOOL)generateAllValues;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 childID:(unsigned int)a1 isFirstChild:(BOOL)a2 ikeSA:(id)a3;
- (void)resetIKESA:(id)a0;
- (void)setState:(unsigned long long)a0 error:(id)a1;
- (void)sentStateUpdate;
- (BOOL)shouldGenerateNewDHKeys;
- (struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)dhECPKeyForDesc:(int)a0;
- (unsigned char[32] *)dhCurveKeyForDesc:(int)a0;
- (void)dealloc;
- (void)reset;

@end
