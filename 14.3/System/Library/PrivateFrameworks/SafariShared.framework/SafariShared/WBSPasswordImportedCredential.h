@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURL *url;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUser:(id)a0 password:(id)a1 url:(id)a2;
- (id)urlCredentialWithPersistence:(unsigned long long)a0;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
