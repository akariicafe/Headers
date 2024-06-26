@class NEIKEv2IKESAConfiguration, NSMutableData, NEIKEv2EAP, NSObject, NEIKEv2SessionConfiguration, NEIKEv2IKESPI, NEIKEv2ConfigurationMessage, NWAddressEndpoint, NSString, NEIKEv2Transport, NEIKEv2Identifier, NEIKEv2IKESAProposal, NEIKEv2AuthenticationProtocol, NSData, NSArray, NSError, NEIKEv2DHProtocol;
@protocol NEIKEv2TransportDelegate, NEIKEv2ConfigurationDelegate, NEIKEv2PacketDelegate, OS_dispatch_queue;

@interface NEIKEv2IKESA : NSObject {
    union { union { struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey256[9]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey384[13]; struct ccec_full_ctx { struct ccec_cp *cp; struct ccec_projective_point { unsigned long long xyz[1]; } point[0]; } dhECPKey521[19]; } dhECPKey; union { unsigned char dhCurveKey25519[32]; } dhCurveKey; } _dhECKey;
}

@property (retain) NEIKEv2IKESAConfiguration *configuration;
@property (retain) NEIKEv2SessionConfiguration *sessionConfiguration;
@property (retain) NEIKEv2Identifier *internalRemoteIdentifier;
@property (retain) NEIKEv2Transport *transport;
@property (retain) NEIKEv2Transport *natTransport;
@property (retain) NEIKEv2Transport *tcpTransport;
@property unsigned long long state;
@property (retain) NSError *error;
@property BOOL shouldSendStateUpdate;
@property (retain) NSMutableData *fetchedPassword;
@property (retain) NSMutableData *fetchedSharedSecret;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (weak) id<NEIKEv2TransportDelegate> transportDelegate;
@property (copy) id /* block */ socketGetBlock;
@property BOOL usesPacketDelegate;
@property (weak) id<NEIKEv2PacketDelegate> packetDelegate;
@property (weak) id<NEIKEv2ConfigurationDelegate> configurationDelegate;
@property (nonatomic) unsigned long long ikeSessionUniqueIndex;
@property (nonatomic) unsigned long long ikeSAUniqueIndex;
@property (retain) NEIKEv2IKESPI *localSPI;
@property (retain) NEIKEv2IKESPI *remoteSPI;
@property (retain) NEIKEv2IKESPI *initiatorSPI;
@property (retain) NEIKEv2IKESPI *responderSPI;
@property BOOL isInitiator;
@property BOOL fragmentationSupported;
@property BOOL mobikeSupported;
@property BOOL useNATTraversal;
@property BOOL useTCPEncapsulation;
@property BOOL detectedOutgoingNAT;
@property BOOL detectedIncomingNAT;
@property BOOL isRekeying;
@property BOOL eapInProgress;
@property BOOL peerAuthenticated;
@property (retain) NWAddressEndpoint *localAddress;
@property (retain) NWAddressEndpoint *remoteAddress;
@property (readonly) NWAddressEndpoint *initiatorAddress;
@property (readonly) NWAddressEndpoint *responderAddress;
@property (retain) NEIKEv2IKESAProposal *chosenProposal;
@property (readonly, nonatomic) NEIKEv2AuthenticationProtocol *authenticationProtocol;
@property double lastReceivedDPD;
@property unsigned short shortDPDCounter;
@property BOOL reportShortDPD;
@property (retain) NSData *localNonce;
@property (retain) NSData *remoteNonce;
@property (retain) NSData *initiatorNonce;
@property (retain) NSData *responderNonce;
@property (retain) NSMutableData *dhPublicKey;
@property (retain) NSData *dhRemotePublicKey;
@property struct OpaqueSecDHContext { } *dhContext;
@property unsigned long long dhPublicKeySize;
@property (readonly) NEIKEv2DHProtocol *preferredDHProtocol;
@property (retain) NEIKEv2DHProtocol *remotePreferredDHProtocol;
@property (retain) NSMutableData *sKeySeed;
@property (retain) NSMutableData *skD;
@property (retain) NSMutableData *skAi;
@property (retain) NSMutableData *skAr;
@property (retain) NSMutableData *skEi;
@property (retain) NSMutableData *skEr;
@property (retain) NSMutableData *skPi;
@property (retain) NSMutableData *skPr;
@property (readonly) NSData *localIntegrityKey;
@property (readonly) NSData *remoteIntegrityKey;
@property (readonly) NSData *encryptionKey;
@property (readonly) NSData *decryptionKey;
@property (retain) NSMutableData *encryptCryptoCtx;
@property (retain) NSMutableData *localCertificateIdentity;
@property (readonly) NSMutableData *sharedSecret;
@property (readonly) NSMutableData *password;
@property (retain) NSMutableData *digitalSignatureLocalPrivateKey;
@property (retain) NSMutableData *digitalSignatureLocalPublicKey;
@property (retain) NSMutableData *digitalSignatureRemotePublicKey;
@property (retain) NSData *cookie;
@property (retain) NSData *responderCookie2;
@property (retain) NSData *initiatorCookie2;
@property (retain) NSData *signHashData;
@property (retain) NSString *outgoingInterfaceName;
@property (retain) NSData *initiatorFirstMessage;
@property (retain) NSData *responderFirstMessage;
@property (retain) NSData *localFirstMessage;
@property (retain) NSData *remoteFirstMessage;
@property (readonly, nonatomic) NEIKEv2Identifier *localIdentifier;
@property (retain, nonatomic) NEIKEv2Identifier *remoteIdentifier;
@property (retain, nonatomic) NEIKEv2Identifier *localIdentifierFromPacket;
@property (retain, nonatomic) NEIKEv2Identifier *remoteIdentifierFromPacket;
@property (nonatomic) unsigned long long childSAModeFromPacket;
@property (retain, nonatomic) NSArray *childSAProposalsFromPacket;
@property (retain, nonatomic) NEIKEv2AuthenticationProtocol *authProtocolFromPacket;
@property (retain, nonatomic) NSData *authenticationDataFromPacket;
@property (retain, nonatomic) NEIKEv2ConfigurationMessage *configMessageFromPacket;
@property (retain, nonatomic) NSArray *initiatorTrafficSelectorsFromPacket;
@property (retain, nonatomic) NSArray *responderTrafficSelectorsFromPacket;
@property (retain) NEIKEv2EAP *eapClient;
@property (readonly) BOOL hasTransport;
@property (retain) NEIKEv2ConfigurationMessage *activeConfiguration;
@property (retain) NSData *receivedDestinationHash;

+ (id)createAuthenticationDataForSharedSecret:(id)a0 octets:(id)a1 prfProtocol:(id)a2;
+ (BOOL)checkValidityOfDigitalSignature:(id)a0 authenticationProtocol:(id)a1 sessionConfiguration:(id)a2 remoteSignedOctets:(id)a3;
+ (id)copySharedSecretFromConfig:(id)a0;
+ (BOOL)checkValidityOfDigitalSignature:(id)a0 sessionConfiguration:(id)a1 remoteSignedOctets:(id)a2;

- (void)updateConfiguration:(id)a0;
- (void)disableWildcard;
- (void)assignRemoteSPI:(id)a0 disableWildCard:(BOOL)a1;
- (BOOL)switchToNATTraversalPorts;
- (BOOL)switchToTCPEncapsulation;
- (unsigned long long)dpdRetryIntervalMilliseconds;
- (id)copyForRekey;
- (BOOL)generateLocalDHValues;
- (BOOL)generateLocalNonce;
- (BOOL)fetchLocalCertificateIdentity;
- (BOOL)calculateSKEYSEEDForRekey:(id)a0;
- (BOOL)calculateSKEYSEEDDerivatives;
- (id)copyRemoteCertificateAuthorityArray;
- (struct __SecIdentity { } *)copyLocalSecIdentity;
- (BOOL)supportsSignHash:(unsigned long long)a0;
- (id)copyInitiatorIdentifier;
- (id)copyResponderIdentifier;
- (id)createResponderSignedOctets;
- (id)createInitiatorSignedOctets;
- (id)createRemoteSignedOctets;
- (id)copyCertSignedData:(id)a0;
- (id)createAuthenticationDataForSharedSecret:(id)a0 octets:(id)a1;
- (id)copyDigitalSignatureSignedData:(id)a0;
- (BOOL)checkValidityOfDigitalSignature:(id)a0;
- (id)createResponderAuthenticationData;
- (id)createInitiatorAuthenticationData;
- (BOOL)generateLocalValues;
- (BOOL)generateAllValuesForRekey:(id)a0;
- (id)copyRemoteCertificateAuthorityDataArray;
- (id)copyRemoteCertificateAuthorityHashData;
- (id)copyLocalCertificateData;
- (BOOL)checkValidityOfCertificates:(id)a0 signature:(id)a1;
- (BOOL)checkNonCertAuthData:(id)a0;
- (id /* block */)copyValidateAuthBlock;
- (id)createInitiatorEAPAuthenticationData;
- (id)createResponderEAPAuthenticationData;
- (id)description;
- (BOOL)shouldReportShortDPD;
- (void)assignRemoteSPI:(id)a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0 error:(id)a1;
- (void)sentStateUpdate;
- (struct ccec_full_ctx { struct ccec_cp *x0; struct ccec_projective_point { unsigned long long x0[1]; } x1[0]; } *)dhECPKeyForDesc:(int)a0;
- (unsigned char[32] *)dhCurveKeyForDesc:(int)a0;
- (id)copySessionConfig;
- (id)copyChildConfig;
- (void)resetSessionConfiguration:(id)a0;
- (void)resetShortDPDParameters;
- (void)dealloc;
- (BOOL)resetRemoteAddress:(id)a0;
- (void)detachTransportWithShouldInvalidate:(BOOL)a0;
- (id)copyTransport;
- (void)resyncAddress;
- (void)reset;
- (id)createLocalSPIForLocalAddress:(id)a0 remoteAddress:(id)a1;
- (BOOL)shouldReceiveWildcard;
- (id)initIKESAWithConfiguration:(id)a0 sessionConfiguration:(id)a1 queue:(id)a2 initialTransport:(id)a3 transportDelegate:(id)a4 socketGetBlock:(id /* block */)a5 packetDelegate:(id)a6 configurationDelegate:(id)a7 ikeSessionUniqueIndex:(unsigned long long)a8;

@end
