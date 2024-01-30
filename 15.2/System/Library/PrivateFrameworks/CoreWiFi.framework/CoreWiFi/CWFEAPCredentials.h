@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {
    void *_TLSIdentityHandle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) struct __SecIdentity { } *TLSIdentity;
@property (copy, nonatomic) const void *TLSIdentityHandle;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)setTLSIdentity:(struct __SecIdentity { } *)a0;
- (struct __SecIdentity { } *)TLSIdentity;
- (BOOL)isEqualToEAPCredentials:(id)a0;
- (const void *)TLSIdentityHandle;
- (void)setTLSIdentityHandle:(const void *)a0;

@end
