@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) AVPlayerItem *playerItem;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)loadView;
- (double)contentHeightForWidth:(double)a0;
- (BOOL)contentHeightLikelyToChange;
- (id)initWithAVPlayerItem:(id)a0;

@end
