@class MPCPlayerResponse;

@interface NMRPlayerResponseNowPlayingState : NMRNowPlayingState <NSCopying>

@property (readonly, nonatomic) MPCPlayerResponse *playerResponse;

- (id)artworkCatalog;
- (id)applicationDisplayName;
- (id)radioStationName;
- (id)identifiers;
- (BOOL)isAdvertisement;
- (id)album;
- (id)radioStationHash;
- (BOOL)isExplicitTrack;
- (id)applicationBundleIdentifier;
- (id)artist;
- (id)title;
- (id)storeAdamID;
- (float)playbackRate;
- (int)shuffleMode;
- (id)timestamp;
- (int)repeatMode;
- (void).cxx_destruct;
- (int)queueEndAction;
- (id)collectionTitle;
- (double)duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)radioStationIdentifier;
- (unsigned int)playbackState;
- (BOOL)isAlwaysLive;
- (BOOL)isAutoPlay;
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
