@class NSDictionary, NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal *_internal;
}

@property (class, readonly) NSURLCredentialStorage *sharedCredentialStorage;

@property (nonatomic) BOOL _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;

- (void)getCredentialsForProtectionSpace:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDefaultCredentialForProtectionSpace:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (id)_allCredentialsWithAccessControlGroup:(id)a0 includeLegacyKeychain:(BOOL)a1;
- (void)setDefaultCredential:(id)a0 forProtectionSpace:(id)a1 task:(id)a2;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1 options:(id)a2 task:(id)a3;
- (void)setDefaultCredential:(id)a0 forProtectionSpace:(id)a1;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1 options:(id)a2;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1;
- (id)defaultCredentialForProtectionSpace:(id)a0;
- (void)setCredential:(id)a0 forProtectionSpace:(id)a1 task:(id)a2;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { } *)a0;
- (void)setCredential:(id)a0 forProtectionSpace:(id)a1;
- (id)credentialsForProtectionSpace:(id)a0;
- (id)_initWithIdentifier:(id)a0 private:(BOOL)a1;
- (struct _CFURLCredentialStorage { } *)_CFURLCredentialStorage;
- (id)init;
- (void)dealloc;

@end
