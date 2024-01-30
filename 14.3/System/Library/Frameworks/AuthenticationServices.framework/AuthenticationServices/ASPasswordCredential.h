@class NSString;

@interface ASPasswordCredential : NSObject <ASAuthorizationCredential>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *user;
@property (readonly, copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)credentialWithUser:(id)a0 password:(id)a1;

- (void).cxx_destruct;
- (id)initWithUser:(id)a0 password:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
