@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController

@property (readonly, nonatomic) AVPlayerItem *playerItem;

- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (double)contentHeightForWidth:(double)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithAVPlayerItem:(id)a0;
- (BOOL)contentHeightLikelyToChange;

@end
