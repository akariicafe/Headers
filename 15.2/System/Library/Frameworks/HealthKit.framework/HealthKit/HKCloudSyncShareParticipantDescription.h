@class NSString;

@interface HKCloudSyncShareParticipantDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identity;
@property (readonly, copy, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) NSString *acceptanceStatus;
@property (readonly, copy, nonatomic) NSString *permission;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentity:(id)a0 role:(id)a1 acceptanceStatus:(id)a2 permission:(id)a3;

@end
