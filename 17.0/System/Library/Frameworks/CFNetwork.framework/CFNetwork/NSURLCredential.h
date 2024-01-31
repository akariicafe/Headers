@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying> {
    NSURLCredentialInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long persistence;

+ (id)credentialForTrust:(struct __SecTrust { } *)a0;
+ (id)credentialWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
+ (id)credentialWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;

- (id)user;
- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)certificates;
- (id)password;
- (id)initWithUser:(id)a0 password:(id)a1 persistence:(unsigned long long)a2;
- (BOOL)hasPassword;
- (void)_removeSWCACreatorAttribute;
- (id)description;
- (struct __SecIdentity { } *)identity;
- (id)initWithTrust:(struct __SecTrust { } *)a0;
- (id)initWithIdentity:(struct __SecIdentity { } *)a0 certificates:(id)a1 persistence:(unsigned long long)a2;
- (id)_initWithCFURLCredential:(struct _CFURLCredential { } *)a0;
- (struct _CFURLCredential { } *)_CFURLCredential;
- (struct _CFURLCredential { } *)_cfurlcredential;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_hasSWCACreatorAttribute;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
