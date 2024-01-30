@class NSString;

@interface AVTStickerFetchRequest : NSObject

@property (readonly, nonatomic) long long resultLimit;
@property (readonly, copy, nonatomic) NSString *avatarIdentifier;
@property (readonly, copy, nonatomic) NSString *stickerIdentifier;
@property (readonly, nonatomic) long long criteria;

+ (id)requestForStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1;
+ (id)requestForMostRecentStickersWithResultLimit:(long long)a0;
+ (id)requestForAllRecentStickers;

- (void).cxx_destruct;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 resultLimit:(long long)a1;
- (id)initWithCriteria:(long long)a0 avatarIdentifier:(id)a1 stickerIdentifier:(id)a2;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
