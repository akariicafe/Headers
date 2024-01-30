@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

- (id)certificates;
- (id)user;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (const struct _CFURLCredential { } *)_cfurlcredential;
- (const struct _CFURLCredential { } *)_CFURLCredential;
- (id)initWithCoder:(id)a0;
- (id)password;
- (BOOL)_hasSWCACreatorAttribute;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (struct __SecIdentity { } *)identity;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void)_removeSWCACreatorAttribute;
- (unsigned long long)hash;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (BOOL)hasPassword;
- (id)description;

@end
