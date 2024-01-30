@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contributorType;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)contributorReferenceForPersistentID:(id)a0;
+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForOtherUserWithUUID:(id)a0;
+ (id)contributorReferenceForPrimaryUser;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithContributorType:(long long)a0 persistentID:(id)a1 uuid:(id)a2;

@end
