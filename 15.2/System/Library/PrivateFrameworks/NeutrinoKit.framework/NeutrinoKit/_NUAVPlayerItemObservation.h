@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) BOOL registeredKVO;

- (void).cxx_destruct;

@end
