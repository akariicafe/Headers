@class NSString;

@interface NEProxyServer : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long type;
@property (readonly) NSString *address;
@property (readonly) long long port;
@property BOOL authenticationRequired;
@property (copy) NSString *username;
@property (copy) NSString *password;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void).cxx_destruct;
- (id)copyPassword;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)needToUpdateKeychain;
- (id)initWithType:(long long)a0 address:(id)a1 port:(long long)a2;
- (void)syncWithKeychain;
- (id)initWithCoder:(id)a0;
- (id)copyProtectionSpace;
- (id)initWithAddress:(id)a0 port:(long long)a1;
- (void)removeFromKeychain;
- (void)encodeWithCoder:(id)a0;

@end
