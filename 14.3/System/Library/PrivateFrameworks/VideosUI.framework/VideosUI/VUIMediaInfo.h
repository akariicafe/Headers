@class TVPPlaylist, NSString, TVImageProxy, IKAppContext;

@interface VUIMediaInfo : TVMediaInfo

@property (retain, nonatomic) TVPPlaylist *tvpPlaylist;
@property (nonatomic) BOOL overridesStartTimeWithResumeTime;
@property (nonatomic) unsigned long long playbackStartReason;
@property (nonatomic) unsigned long long playbackContext;
@property (readonly, nonatomic) BOOL hasProgress;
@property (nonatomic) BOOL showsSecondaryVideoView;
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart;
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop;
@property (nonatomic) unsigned long long playbackStopReason;
@property (nonatomic) BOOL restrictionsAlreadyUnlocked;
@property (nonatomic) BOOL shouldDelayLoadingImage;
@property (retain, nonatomic) IKAppContext *appContext;
@property (nonatomic) BOOL allowsPictureInPicture;
@property (nonatomic) double playbackDelayInterval;
@property (retain, nonatomic) TVImageProxy *alphaImageProxy;
@property (retain, nonatomic) NSString *alphaLayerAccessibilityText;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlaybackContext:(unsigned long long)a0 vuiMediaItems:(id)a1;
- (void)setUserPlaybackInitiationDate:(id)a0 openURLCompletionDate:(id)a1;
- (id)initWithPlaybackContext:(unsigned long long)a0 mpMediaItems:(id)a1;
- (id)initWithPlaybackContext:(unsigned long long)a0 videosPlayables:(id)a1 imageProxies:(id)a2 storeDictionary:(id)a3;
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
- (id)_hlsURLEnsuringDsidQueryParamIsPresentFromURL:(id)a0;
- (id)_hlsURLUpdatedWithBingeWatchingParamFromURL:(id)a0;
- (id)_playlistFromMPMediaItems:(id)a0;
- (id)_storeMediaItemFromMPMediaItem:(id)a0;
- (long long)_videoResolutionFromMPVideoQuality:(long long)a0;
- (long long)_videoDynamimcRangeFromMPColorCapability:(long long)a0;
- (id)_playlistForVUIMediaItems:(id)a0;
- (id)initWithBackgroundImageDictionary:(id)a0;

@end
