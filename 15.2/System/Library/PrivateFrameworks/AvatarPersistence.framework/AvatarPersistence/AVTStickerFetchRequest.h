@class NSString;

@interface AVTStickerFetchRequest : NSObject

@property (readonly, nonatomic) long long resultLimit;
@property (readonly, copy, nonatomic) NSString *avatarIdentifier;
@property (readonly, copy, nonatomic) NSString *stickerIdentifier;
@property (readonly, nonatomic) long long criteria;

+ (id)requestForMostRecentStickersWithResultLimit:(long long)a0;
+ (id)requestForAllRecentStickers;
+ (id)requestForStickersWithAvatarIdentifier:(id)a0 stickerIdentifier:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 resultLimit:(long long)a1;
- (id)initWithCriteria:(long long)a0 avatarIdentifier:(id)a1 stickerIdentifier:(id)a2;

@end
