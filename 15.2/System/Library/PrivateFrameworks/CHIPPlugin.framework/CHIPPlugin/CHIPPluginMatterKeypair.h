@class NSString;

@interface CHIPPluginMatterKeypair : HMFObject <HMFLogging, CHIPKeypair>

@property BOOL initialized;
@property (readonly) struct __SecKey { } *privateKey;
@property (readonly) struct __SecKey { } *publicKey;
@property (retain) NSString *keychainAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)initialize;
- (BOOL)reload;
- (id)initWithAccount:(id)a0;
- (id)logIdentifier;
- (BOOL)deserialize:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (struct __SecKey { } *)pubkey;
- (id)ECDSA_sign_hash:(id)a0;
- (id)_getPrivateKeydata;
- (BOOL)_generateKeys;
- (BOOL)_reloadWithData:(id)a0;
- (BOOL)_storePrivateKeyData:(id)a0;

@end
