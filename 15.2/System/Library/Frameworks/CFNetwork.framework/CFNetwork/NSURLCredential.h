@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (const struct _CFURLCredential { } *)_cfurlcredential;
- (void)encodeWithCoder:(id)a0;
- (id)user;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (id)description;
- (const struct _CFURLCredential { } *)_CFURLCredential;
- (struct __SecIdentity { } *)identity;
- (id)password;
- (id)certificates;
- (BOOL)_hasSWCACreatorAttribute;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_removeSWCACreatorAttribute;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)hasPassword;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

@end
