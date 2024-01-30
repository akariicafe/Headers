@class NSNumber, NSUUID;

@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long contributorType;
@property (readonly, copy, nonatomic) NSNumber *persistentID;
@property (readonly, copy, nonatomic) NSUUID *UUID;

+ (id)contributorReferenceForOtherUserWithUUID:(id)a0;
+ (id)contributorReferenceForPrimaryUser;
+ (id)contributorReferenceForNoContributor;
+ (id)contributorReferenceForPersistentID:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
