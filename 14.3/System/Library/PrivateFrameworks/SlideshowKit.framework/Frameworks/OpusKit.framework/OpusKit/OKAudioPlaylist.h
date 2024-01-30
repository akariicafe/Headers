@class NSString, NSArray, OKMediaItem, OKPresentation, NSMutableDictionary, NSOperationQueue, OKAudioDucker, NSObject, AVPlayer;
@protocol OKAudioPlaylistDelegate, OS_dispatch_queue;

@interface OKAudioPlaylist : NSObject <AVAudioPlayerDelegate> {
    NSArray *_mediaItems;
    NSMutableDictionary *_players;
    BOOL _playing;
    long long _currentPlayerIndex;
    AVPlayer *_currentMedia;
    OKAudioDucker *_ducker;
    OKPresentation *_presentation;
    NSOperationQueue *_mediaItemOperationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (nonatomic) float volume;
@property (nonatomic) BOOL loops;
@property (nonatomic) double playingMusicCurrentTime;
@property (readonly, nonatomic) double playingMusicDuration;
@property (readonly, nonatomic) OKMediaItem *playingItem;
@property (nonatomic) id<OKAudioPlaylistDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlaying;
- (void)play;
- (void)next;
- (void)dealloc;
- (void)rewind;
- (void)stop;
- (void)setPlaying:(BOOL)a0;
- (void)prev;
- (void)beginFadingWithDuration:(double)a0;
- (void)beginDuckingToLevel:(double)a0 fadeDuration:(double)a1;
- (void)endDucking;
- (id)initWithAudioItems:(id)a0 presentation:(id)a1;
- (id)initWithAudioURLs:(id)a0 presentation:(id)a1;
- (void)endFading;
- (id)currentMedia;
- (void)audioFinishedPlaying:(id)a0;
- (void)_playMediaItem:(id)a0 forMediaItem:(id)a1;
- (void)setCurrentMedia:(id)a0;

@end
