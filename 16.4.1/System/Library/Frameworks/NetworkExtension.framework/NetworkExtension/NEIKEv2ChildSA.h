@class NSError, NSData, NSArray, NEIKEv2DHProtocol, NEIKEv2IKESA, NEIKEv2ESPSPI, NEIKEv2ChildSAProposal, NSMutableData, NEIKEv2ChildSAConfiguration;

@interface NEIKEv2ChildSA : NSObject {
    union { union { struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey256[9]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey384[13]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey521[19]; } dhECPKey; union { unsigned char dhCurveKey25519[32]; } dhCurveKey; } _dhECKey;
    BOOL _shouldSendStateUpdate;
    BOOL _isFirstChild;
    BOOL _isInitiator;
    BOOL _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    unsigned long long _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    NSMutableData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    struct OpaqueSecDHContext { } *_dhContext;
    unsigned long long _dhPublicKeySize;
    NEIKEv2DHProtocol *_remotePreferredDHProtocol;
    NSMutableData *_incomingEncryptionKey;
    NSMutableData *_incomingIntegrityKey;
    NSMutableData *_outgoingEncryptionKey;
    NSMutableData *_outgoingIntegrityKey;
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal *_responderRekeyProposal;
    NEIKEv2ESPSPI *_rekeyedSPI;
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
