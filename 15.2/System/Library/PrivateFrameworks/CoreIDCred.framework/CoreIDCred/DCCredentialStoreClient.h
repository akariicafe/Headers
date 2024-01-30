@class DCXPCDisconnectionHandler, NSString, NSXPCConnection;
@protocol DCCredentialStoreXPCProtocol;

@interface DCCredentialStoreClient : NSObject <DCCredentialStoreXPCProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (retain) id<DCCredentialStoreXPCProtocol> remoteObjectProxy;
@property (retain) DCXPCDisconnectionHandler *disconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void)payloadAuthACLForCredential:(id)a0 completion:(id /* block */)a1;
- (void)elementsOfCredential:(id)a0 elementIdentifiers:(id)a1 authData:(id)a2 completion:(id /* block */)a3;
- (void)generateKeySigningKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generateDeviceEncryptionKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeyForCredential:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPartitions:(id)a0 completion:(id /* block */)a1;
- (void)authorizeRemoteKeySigningKeyWithCredential:(id)a0 remoteKey:(id)a1 completion:(id /* block */)a2;
- (void)associateExternalPresentmentKeyWithCredential:(id)a0 publicKeyIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)credentialIdentifierForPublicKeyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)replacePayloadOfCredential:(id)a0 withPayload:(id)a1 format:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setStateOfCredential:(id)a0 to:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)checkCompletenessOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)payloadsOfCredential:(id)a0 completion:(id /* block */)a1;
- (void)allElementsOfCredential:(id)a0 authData:(id)a1 completion:(id /* block */)a2;
- (void)occupiedLegacySEKeySlotsWithCompletion:(id /* block */)a0;
- (void)eraseLegacySEKeySlot:(long long)a0 completion:(id /* block */)a1;

@end
