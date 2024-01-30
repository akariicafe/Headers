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

+ (id)securityScopedURL:(id)a0 withToken:(id)a1;
+ (id)securityScopedURL:(id)a0;

- (id)data;
- (void)dealloc;
- (BOOL)isReadable;
- (void)stopAccess;
- (id)startWriteAccess;
- (BOOL)isBundle;
- (id)initWithSecurityScopedURL:(id)a0 withToken:(id)a1;
- (void)_attachSecurityScope;
- (id)_temporaryReadURL:(id)a0 error:(id *)a1;
- (void)_removeTemporaryReadURL;
- (id)securityScopeToken;
- (id)startReadAccess;

@end
