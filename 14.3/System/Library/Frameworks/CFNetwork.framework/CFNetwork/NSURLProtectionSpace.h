@class NSString, NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSSecureCoding, NSCopying> {
    NSURLProtectionSpaceInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *realm;
@property (readonly) BOOL receivesCredentialSecurely;
@property (readonly) BOOL isProxy;
@property (readonly, copy) NSString *host;
@property (readonly) long long port;
@property (readonly, copy) NSString *proxyType;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *authenticationMethod;

- (struct __SecTrust { } *)serverTrust;
- (id)initWithHost:(id)a0 port:(long long)a1 protocol:(id)a2 realm:(id)a3 authenticationMethod:(id)a4;
- (id)initWithProxyHost:(id)a0 port:(long long)a1 type:(id)a2 realm:(id)a3 authenticationMethod:(id)a4;
- (id)init;
- (struct _CFURLProtectionSpace { } *)_cfurlprtotectionspace;
- (id)_initWithCFURLProtectionSpace:(struct _CFURLProtectionSpace { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct _CFURLProtectionSpace { } *)_CFURLProtectionSpace;
- (id)distinguishedNames;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
