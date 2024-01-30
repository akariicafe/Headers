@class MPAVController, MPAVItem, SKUIMediaPlayerItemStatus;

@interface SKUIMediaPlayer : NSObject

@property (retain, nonatomic) SKUIMediaPlayerItemStatus *playerItem;
@property (weak, nonatomic) MPAVController *player;
@property (weak, nonatomic) MPAVItem *currentItem;
@property (nonatomic) float rate;
@property (retain, nonatomic) id periodicTimeObserver;
@property (nonatomic) BOOL playing;

- (void).cxx_destruct;

@end
