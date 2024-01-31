@class NSUUID, NSString, CXAccount, CXHandle;

@interface CXSenderIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) CXAccount *account;
@property (readonly, nonatomic) CXHandle *handle;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedShortName;

+ (id)unarchivedObjectFromData:(id)a0 error:(id *)a1;
+ (id)unarchivedObjectClasses;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)archivedDataWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSenderIdentity:(id)a0;
- (id)initWithUUID:(id)a0 account:(id)a1;
- (id)initWithUUID:(id)a0 handle:(id)a1 localizedName:(id)a2;

@end
