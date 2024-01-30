@class MPCPlayerResponse;

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying>

@property (readonly, nonatomic) MPCPlayerResponse *playerResponse;

- (id)album;
- (float)playbackRate;
- (id)artist;
- (id)radioStationName;
- (unsigned int)playbackState;
- (id)identifiers;
- (id)timestamp;
- (int)shuffleMode;
- (void).cxx_destruct;
- (BOOL)isAdvertisement;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAutoPlay;
- (id)artworkCatalog;
- (int)queueEndAction;
- (BOOL)isAlwaysLive;
- (int)repeatMode;
- (id)collectionTitle;
- (id)applicationDisplayName;
- (double)duration;
- (id)applicationBundleIdentifier;
- (id)radioStationHash;
- (BOOL)isExplicitTrack;
- (id)storeAdamID;
- (id)radioStationIdentifier;
- (id)title;
- (id)itemPersistentID;
- (float)preferredPlaybackRate;
- (id)itemCompanionPersistentID;
- (id)itemAlbumPersistentID;
- (double)elapsedTimeAtLastUpdate;
- (BOOL)isRepeatModeCommandSupported;
- (BOOL)isShuffleModeCommandSupported;
- (BOOL)isQueueEndActionCommandSupported;
- (BOOL)isPlaybackRateCommandSupported;
- (BOOL)isLikeCommandSupported;
- (BOOL)isLikeCommandEnabled;
- (BOOL)isLikedActive;
- (id)localizedLikeTitle;
- (long long)likeCommandPresentationStyle;
- (BOOL)isBanCommandSupported;
- (BOOL)isBanCommandEnabled;
- (BOOL)isBannedActive;
- (id)localizedBanTitle;
- (long long)banCommandPresentationStyle;
- (BOOL)isBookmarkCommandSupported;
- (BOOL)isBookmarkCommandEnabled;
- (BOOL)isBookmarkedActive;
- (id)localizedBookmarkTitle;
- (BOOL)isNextTrackCommandEnabled;
- (BOOL)isPreviousTrackCommandEnabled;
- (BOOL)isSkipForwardCommandEnabled;
- (BOOL)isSkipBackwardCommandEnabled;
- (double)fastForwardTimeInterval;
- (double)rewindTimeInterval;
- (BOOL)hasNowPlayingItem;
- (BOOL)hasUpNextQueue;
- (BOOL)isQueueEndActionSupported:(int)a0;
- (id)initWithPlayerResponse:(id)a0;
- (id)_nowPlayingSong;
- (id)_nowPlayingRadioStation;

@end
