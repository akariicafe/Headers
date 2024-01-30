@class NSNumber;

@interface VUIPlaybackPositionInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *bookmarkTime;
@property (retain, nonatomic) NSNumber *playCount;
@property (retain, nonatomic) NSNumber *hasBeenPlayed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
