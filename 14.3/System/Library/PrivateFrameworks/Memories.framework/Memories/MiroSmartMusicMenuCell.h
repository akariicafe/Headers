@class MiroCircularProgressBar, NSString, UIView, UIImageView, VEKSong, Reachability, UILabel, MiroSongPreviewButton;

@interface MiroSmartMusicMenuCell : UITableViewCell <VisualCompletionInformable> {
    BOOL _visualProgressCompleted;
}

@property (weak, nonatomic) UILabel *songName;
@property (weak, nonatomic) UILabel *artistName;
@property (weak, nonatomic) MiroCircularProgressBar *progressIndicator;
@property (weak, nonatomic) UIView *progressBackgroundView;
@property (weak, nonatomic) UIImageView *cloudStatus;
@property (weak, nonatomic) UIImageView *artwork;
@property (nonatomic) BOOL observingSong;
@property (retain, nonatomic) Reachability *reachability;
@property (retain, nonatomic) NSString *songUID;
@property (nonatomic) float progress;
@property (retain, nonatomic) VEKSong *song;
@property (weak, nonatomic) UIImageView *checkmark;
@property (weak, nonatomic) MiroSongPreviewButton *previewSongButton;

+ (double)dynamicTypeHeight;

- (long long)networkStatus;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)_updateTextColors;
- (void)_setProgress:(float)a0;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)_setupReachabiliy;
- (void)networkStatusChanged:(id)a0;
- (void)reactToVisualCompletion;
- (void)_updateCloudStatus;
- (void)_updateProgressIndicator:(float)a0;
- (void)updateArtwork;
- (void)updateSongNameForSong:(id)a0;
- (void)_songAssetChanged:(id)a0;
- (void)_updateDownload:(id)a0;

@end
