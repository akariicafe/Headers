@class NSDictionary, NSURLCredentialStorageInternal;

@interface NSURLCredentialStorage : NSObject {
    NSURLCredentialStorageInternal *_internal;
}

@property (class, readonly) NSURLCredentialStorage *sharedCredentialStorage;

@property (nonatomic) BOOL _useSystemKeychain;
@property (readonly, copy) NSDictionary *allCredentials;

- (void)dealloc;
- (id)init;
- (struct _CFURLCredentialStorage { } *)_CFURLCredentialStorage;
- (id)_allCredentialsWithAccessControlGroup:(id)a0 includeLegacyKeychain:(BOOL)a1;
- (id)_initWithCFURLCredentialStorage:(struct _CFURLCredentialStorage { } *)a0;
- (id)_initWithIdentifier:(id)a0 private:(BOOL)a1;
- (id)credentialsForProtectionSpace:(id)a0;
- (id)defaultCredentialForProtectionSpace:(id)a0;
- (void)getCredentialsForProtectionSpace:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void)getDefaultCredentialForProtectionSpace:(id)a0 task:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1 options:(id)a2;
- (void)removeCredential:(id)a0 forProtectionSpace:(id)a1 options:(id)a2 task:(id)a3;
- (void)setCredential:(id)a0 forProtectionSpace:(id)a1;
- (void)setCredential:(id)a0 forProtectionSpace:(id)a1 task:(id)a2;
- (void)setDefaultCredential:(id)a0 forProtectionSpace:(id)a1;
- (void)setDefaultCredential:(id)a0 forProtectionSpace:(id)a1 task:(id)a2;

@end
