@class NSString;

@interface SKUIMediaPlayerItemStatus : NSObject <NSCopying>

@property (nonatomic) double currentTime;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hideDuration;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic) long long itemType;
@property (nonatomic) long long playState;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *storeAlbumID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
