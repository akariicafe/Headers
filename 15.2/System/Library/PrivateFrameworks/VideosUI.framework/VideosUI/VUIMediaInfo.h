@class TVPPlaylist, NSArray, UIColor, VUIAppContext, UIView, VUIImageProxy, NSString;

@interface VUIMediaInfo : NSObject <NSCopying>

@property (retain, nonatomic) TVPPlaylist *tvpPlaylist;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (nonatomic) BOOL overridesStartTimeWithResumeTime;
@property (nonatomic) unsigned long long playbackStartReason;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) unsigned long long intent;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *imageProxies;
@property (retain, nonatomic) TVPPlaylist *playlist;
@property (retain, nonatomic) UIView *overlayView;
@property (readonly, nonatomic) BOOL hasProgress;
@property (nonatomic) BOOL showsSecondaryVideoView;
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart;
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop;
@property (nonatomic) unsigned long long playbackStopReason;
@property (nonatomic) BOOL restrictionsAlreadyUnlocked;
@property (nonatomic) BOOL shouldDelayLoadingImage;
@property (retain, nonatomic) VUIAppContext *appContext;
@property (nonatomic) BOOL allowsPictureInPicture;
@property (nonatomic) double playbackDelayInterval;
@property (retain, nonatomic) VUIImageProxy *alphaImageProxy;
@property (retain, nonatomic) NSString *alphaLayerAccessibilityText;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithPlaybackContext:(unsigned long long)a0 vuiMediaItems:(id)a1;
- (id)initWithPlaybackContext:(unsigned long long)a0 videosPlayables:(id)a1 imageProxies:(id)a2 storeDictionary:(id)a3;
- (void)setUserPlaybackInitiationDate:(id)a0 openURLCompletionDate:(id)a1;
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)a0;
- (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)a0;
- (id)initWithPlaybackContext:(unsigned long long)a0 mpMediaItems:(id)a1;
- (id)_playlistFromVideosPlayables:(id)a0 andStoreDictionary:(id)a1;
- (void)_updatePlaybackStartReason;
- (id)_playbackOverridesForURL:(id)a0 orAdamID:(id)a1;
- (id)_storeMediaItemFromVideosPlayable:(id)a0 andStoreDictionary:(id)a1;
- (id)_tvpRatingDomainFromUTSRatingDomain:(id)a0;
- (void)_populateMediaItem:(id)a0 withMetadataFromVideosPlayable:(id)a1;
- (id)_auxMediaItemFromVideosPlayable:(id)a0;
- (id)_tvpMediaTypeFromPlayable:(id)a0;
- (void)_populateMediaItem:(id)a0 withResumeTimeInfoFromPlayable:(id)a1;
- (void)_populateMediaItem:(id)a0 withMetadataOverrides:(id)a1;
- (id)_playlistFromMPMediaItems:(id)a0;
- (id)_storeMediaItemFromMPMediaItem:(id)a0;
- (long long)_videoResolutionFromMPVideoQuality:(long long)a0;
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)a0;
- (id)_playlistForVUIMediaItems:(id)a0;

@end
