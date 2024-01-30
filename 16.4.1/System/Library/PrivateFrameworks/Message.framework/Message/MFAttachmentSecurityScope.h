@class NSURL, NSFileCoordinator, NSData;

@interface MFAttachmentSecurityScope : NSObject {
    NSFileCoordinator *_fileCoordinator;
    NSURL *_securityScopedURL;
    NSData *_securityScopeToken;
    NSURL *_secureReadURL;
    BOOL _securedRead;
    NSURL *_secureWriteURL;
    BOOL _securedWrite;
}

+ (id)securityScopedURL:(id)a0;
+ (id)securityScopedURL:(id)a0 withToken:(id)a1;

- (BOOL)isReadable;
- (id)data;
- (void)dealloc;
- (BOOL)isBundle;
- (void).cxx_destruct;
- (id)startReadAccess;
- (void)_attachSecurityScope;
- (void)_removeTemporaryReadURL;
- (id)_temporaryReadURL:(id)a0 error:(id *)a1;
- (id)initWithSecurityScopedURL:(id)a0 withToken:(id)a1;
- (id)securityScopeToken;
- (id)startWriteAccess;
- (void)stopAccess;

@end
