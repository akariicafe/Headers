@class Reachability, UIImageView, MiroCircularProgressBar, UIView, MiroSongPreviewButton;

@interface MiroFeaturedMusicMenuCell : MiroMusicMenuCell

@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator;
@property (weak, nonatomic) UIView *progressBackgroundView;
@property (weak, nonatomic) UIImageView *cloudStatus;
@property (nonatomic) BOOL observingSong;
@property (retain, nonatomic) Reachability *reachability;
@property (nonatomic) float progress;
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton;

- (long long)networkStatus;
- (void)setSong:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)_updateTextColors;
- (void)_setProgress:(float)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)_setupReachabiliy;
- (void)networkStatusChanged:(id)a0;
- (void)_updateCloudStatus;
- (void)_updateProgressIndicator:(float)a0;
- (void)updateArtwork;
- (void)updateSongNameForSong:(id)a0;
- (void)_songAssetChanged:(id)a0;
- (void)_updateDownload:(id)a0;

@end
