@class MiroSongPreviewButton, UIImageView, MiroCircularProgressBar, UIView, VEKReachability;

@interface MiroFeaturedMusicMenuCell : MiroMusicMenuCell

@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator;
@property (weak, nonatomic) UIView *progressBackgroundView;
@property (weak, nonatomic) UIImageView *cloudStatus;
@property (nonatomic) BOOL observingSong;
@property (retain, nonatomic) VEKReachability *reachability;
@property (nonatomic) float progress;
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton;

- (void)awakeFromNib;
- (void)setSong:(id)a0;
- (long long)networkStatus;
- (void)_updateTextColors;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)_setProgress:(float)a0;
- (void)updateArtwork;
- (void)_setupReachabiliy;
- (void)networkStatusChanged:(id)a0;
- (void)_updateCloudStatus;
- (void)_updateProgressIndicator:(float)a0;
- (void)updateSongNameForSong:(id)a0;
- (void)_songAssetChanged:(id)a0;
- (void)_updateDownload:(id)a0;

@end
