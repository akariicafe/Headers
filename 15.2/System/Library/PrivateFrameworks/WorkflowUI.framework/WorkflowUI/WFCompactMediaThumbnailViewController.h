@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) AVPlayerItem *playerItem;

- (void)loadView;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithAVPlayerItem:(id)a0;
- (BOOL)contentHeightLikelyToChange;

@end
