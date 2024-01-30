@class CPUITableCellAccessory, MPUNowPlayingIndicatorView, UIImageView, UIImage, UIView, UIActivityIndicatorView;

@interface CPUITableCell : _CPUIBaseTableCell

@property (nonatomic, getter=isShowExplicit) BOOL showExplicit;
@property (retain, nonatomic) CPUITableCellAccessory *cloudAccessory;
@property (retain, nonatomic) CPUITableCellAccessory *accessory;
@property (retain, nonatomic) UIImage *cloudImage;
@property (retain, nonatomic) UIImage *chevronImage;
@property (nonatomic) BOOL showActivityIndicator;
@property (nonatomic) double playbackProgress;
@property (retain, nonatomic) UIImage *playbackProgressFullImage;
@property (nonatomic) BOOL shouldShowPlaybackProgress;
@property (nonatomic) BOOL container;
@property (retain, nonatomic) UIImage *artwork;
@property (nonatomic) long long playbackState;
@property (nonatomic) BOOL playingIndicatorLeadingSide;
@property (retain, nonatomic) UIView *playbackProgressView;
@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UIImageView *explicitItemView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (readonly, nonatomic) MPUNowPlayingIndicatorView *nowPlayingIndicator;
@property (nonatomic) struct CGSize { double width; double height; } artworkSize;

+ (double)rowHeight;
+ (double)minimumHeight;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)updateArtwork;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)currentlyPlaying;
- (void)applyConfiguration:(id)a0;
- (void)_updateTintColors;
- (double)_accessoryWidth;
- (void)_setCloudAccessory:(id)a0;
- (void)_updatePlayingArtworkIfNeeded;
- (void)configureCell;
- (void)setShowsExplicit:(BOOL)a0;
- (void)updatePlaybackProgress;

@end
