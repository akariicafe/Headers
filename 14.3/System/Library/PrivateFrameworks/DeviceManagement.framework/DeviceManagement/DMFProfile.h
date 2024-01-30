@class NSString, NSArray, NSDictionary;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *UUID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long profileVersion;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *organization;
@property (readonly, copy, nonatomic) NSString *profileDescription;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL hasRemovalPasscode;
@property (readonly, nonatomic) BOOL isEncrypted;
@property (readonly, copy, nonatomic) NSArray *signerCertificates;
@property (readonly, copy, nonatomic) NSArray *payloads;
@property (readonly, copy, nonatomic) NSDictionary *restrictions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 profileVersion:(long long)a3 displayName:(id)a4 organization:(id)a5 profileDescription:(id)a6 isManaged:(BOOL)a7 isLocked:(BOOL)a8 hasRemovalPasscode:(BOOL)a9 isEncrypted:(BOOL)a10 signerCertificates:(id)a11 payloads:(id)a12 restrictions:(id)a13;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
