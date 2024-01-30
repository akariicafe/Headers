@class NSNumber;

@interface VUIPlaybackPositionInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *bookmarkTime;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *hasBeenPlayed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
