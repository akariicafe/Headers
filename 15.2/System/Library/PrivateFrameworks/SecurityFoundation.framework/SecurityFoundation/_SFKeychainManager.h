@class _SFCredentialStore, NSObject;
@protocol OS_dispatch_queue;

@interface _SFKeychainManager : NSObject

@property (retain) _SFCredentialStore *credentialStore;
@property (retain) NSObject<OS_dispatch_queue> *keychainManagerQueue;
@property (retain) NSObject<OS_dispatch_queue> *keychainReplyQueue;

+ (id)defaultManager;
+ (id)defaultOverCommitManager;

- (id)initOverCommitManager;
- (struct __CFDictionary { } *)_privateKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)setKey:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (void)keysFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (void)dataForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_symmetricKeyAttributesForIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (void)setIdentity:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (void)removeItemWithIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (struct __CFDictionary { } *)_certificateAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1;
- (void)keyForIdentifier:(id)a0 specifier:(id)a1 resultHandler:(id /* block */)a2;
- (struct __CFDictionary { } *)_publicKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;
- (id)initManager;
- (void)identityForIdentifier:(id)a0 resultHandler:(id /* block */)a1;
- (void)identitiesFilteredBy:(id)a0 resultHandler:(id /* block */)a1;
- (void)setData:(id)a0 forIdentifier:(id)a1 accessPolicy:(id)a2 resultHandler:(id /* block */)a3;
- (struct __CFDictionary { } *)_commonKeyAttributesForIdentityIdentifier:(id)a0 accessPolicy:(id)a1 key:(id)a2;

@end
