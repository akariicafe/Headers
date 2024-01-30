@class NSString, NSURL;

@interface WBSPasswordImportedCredential : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSURL *otpAuthURL;
@property (readonly, copy, nonatomic) NSString *notesEntry;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)encryptedURLCredentialWithPersistence:(unsigned long long)a0;
- (id)initWithUser:(id)a0 password:(id)a1 url:(id)a2;
- (id)initWithUser:(id)a0 password:(id)a1 url:(id)a2 sidecarData:(id)a3;
- (id)urlCredentialWithPersistence:(unsigned long long)a0;

@end
