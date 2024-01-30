@class NSString, NSArray, MPCPlayerResponseTracklist, MPArtworkCatalog, MPCPlayerResponseItem, MPCPlayerResponse, NSNumber, MPModelSong;

@interface CPUINowPlayingSnapshot : NSObject

@property (class, readonly, nonatomic) NSArray *knownJumpIntervals;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic) struct { double snapshotTime; double startTime; double endTime; double duration; double elapsedDuration; float rate; float defaultRate; BOOL isLiveContent; BOOL isLoading; } durationSnapshot;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) MPCPlayerResponseTracklist *tracklist;
@property (readonly, nonatomic) MPModelSong *song;
@property (readonly, nonatomic) BOOL isRadioPlayback;
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) MPCPlayerResponseItem *responseItem;
@property (readonly, nonatomic) NSNumber *jumpBackInterval;
@property (readonly, nonatomic) NSNumber *jumpForwardInterval;
@property (readonly, nonatomic) BOOL shouldEnableBackButton;
@property (readonly, nonatomic) BOOL shouldEnableNextButton;

- (void).cxx_destruct;
- (id)initWithResponse:(id)a0;
- (id)commandWithType:(unsigned long long)a0;

@end
