@class NSArray;

@interface AVTAvatarFetchRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *excludingIdentifiers;
@property (readonly, nonatomic) long long criteria;
@property (readonly, nonatomic) long long fetchLimit;

+ (id)requestForAllAvatars;
+ (id)requestForAllAvatarsExcluding:(id)a0;
+ (id)requestForAvatarWithIdentifier:(id)a0;
+ (id)requestForAvatarsWithIdentifiers:(id)a0;
+ (id)requestForStorePrimaryAvatar;
+ (id)requestForCustomAvatarsWithLimit:(long long)a0;
+ (id)requestForCustomAvatars;
+ (id)requestForPredefinedAvatars;

- (void).cxx_destruct;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 identifiers:(id)a1 excludedIdentifiers:(id)a2 fetchLimit:(long long)a3;
- (id)initWithCriteria:(long long)a0 identifier:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
