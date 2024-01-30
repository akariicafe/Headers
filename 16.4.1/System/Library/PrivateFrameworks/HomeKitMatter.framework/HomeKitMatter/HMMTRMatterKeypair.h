@class NSString;

@interface HMMTRMatterKeypair : HMFObject <HMFLogging, MTRKeypair>

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
- (id)initWithAccount:(id)a0;
- (BOOL)reload;
- (BOOL)deserialize:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)_generateKeys;
- (struct __SecKey { } *)pubkey;
- (id)signMessageECDSA_DER:(id)a0;
- (id)_getPrivateKeydata;
- (BOOL)_reloadWithData:(id)a0;
- (BOOL)_storePrivateKeyData:(id)a0;

@end
