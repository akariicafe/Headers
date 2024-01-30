@class NSArray, NSString;

@interface ASTIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *aliases;
@property (retain, nonatomic) NSArray *json;
@property (retain, nonatomic) NSString *hostAppVersion;
@property (retain, nonatomic) NSString *hostAppBuild;

+ (id)identityWithIdentityAliases:(id)a0;
+ (id)identityWithSerialNumber:(id)a0;

- (id)userAgent;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_dictionariesFromIdentityAliases:(id)a0;
- (id)initWithIdentityAliases:(id)a0;

@end
