@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;

- (id)user;
- (const struct _CFURLCredential { } *)_cfurlcredential;
- (struct __SecIdentity { } *)identity;
- (const struct _CFURLCredential { } *)_CFURLCredential;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)certificates;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)hasPassword;
- (id)description;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasSWCACreatorAttribute;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (void)_removeSWCACreatorAttribute;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)password;
- (void)encodeWithCoder:(id)a0;

@end
