@class NSUUID, TUHandle, NSString;

@interface TUSenderIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSUUID *accountUUID;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedShortName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToSenderIdentity:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithUUID:(id)a0 accountUUID:(id)a1 localizedName:(id)a2 localizedShortName:(id)a3 handle:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
