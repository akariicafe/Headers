@class NSArray;

@interface AVTAvatarFetchRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *excludingIdentifiers;
@property (readonly, nonatomic) long long criteria;
@property (readonly, nonatomic) long long fetchLimit;

+ (id)requestForCustomAvatarsWithLimit:(long long)a0;
+ (id)requestForAvatarWithIdentifier:(id)a0;
+ (id)requestForCustomAvatars;
+ (id)requestForPredefinedAvatars;
+ (id)requestForAllAvatars;
+ (id)requestForAvatarsWithIdentifiers:(id)a0;
+ (id)requestForAllAvatarsExcluding:(id)a0;
+ (id)requestForPredefinedAvatarsExcluding:(id)a0;
+ (id)requestForStorePrimaryAvatar;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 identifiers:(id)a1 excludedIdentifiers:(id)a2 fetchLimit:(long long)a3;
- (id)initWithCriteria:(long long)a0 identifier:(id)a1;

@end
