@class NSNumber, NSString, MPArtworkCatalog;

@interface NMRPlaceholderNowPlayingState : NMRNowPlayingState

@property (copy, nonatomic) NSNumber *itemPersistentID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (copy, nonatomic) NSString *collectionTitle;
@property (nonatomic) float playbackRate;
@property (nonatomic) float preferredPlaybackRate;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic, getter=isExplicitTrack) BOOL explicitTrack;
@property (retain, nonatomic) NSString *radioStationName;
@property (nonatomic, getter=isAlwaysLive) BOOL alwaysLive;
@property (nonatomic, getter=isPlaybackRateCommandSupported) BOOL playbackRateCommandSupported;
@property (nonatomic, getter=isNextTrackCommandEnabled) BOOL nextTrackCommandEnabled;
@property (nonatomic, getter=isPreviousTrackCommandEnabled) BOOL previousTrackCommandEnabled;
@property (nonatomic, getter=isSkipForwardCommandEnabled) BOOL skipForwardCommandEnabled;
@property (nonatomic, getter=isSkipBackwardCommandEnabled) BOOL skipBackwardCommandEnabled;
@property (nonatomic) double fastForwardTimeInterval;
@property (nonatomic) double rewindTimeInterval;

- (void).cxx_destruct;

@end
