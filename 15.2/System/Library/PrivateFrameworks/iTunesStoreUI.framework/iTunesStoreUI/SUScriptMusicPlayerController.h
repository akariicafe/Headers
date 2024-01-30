@class NSString, NSNumber, SUScriptMediaItem;

@interface SUScriptMusicPlayerController : SUScriptObject {
    NSString *_playerType;
}

@property (readonly) double currentPlaybackTime;
@property (readonly) SUScriptMediaItem *nowPlayingItem;
@property (readonly) NSString *playbackState;
@property (readonly) NSString *playerType;
@property (copy) NSString *repeatMode;
@property (copy) NSString *shuffleMode;
@property (retain) NSNumber *volume;
@property (readonly) NSString *playbackStateInterrupted;
@property (readonly) NSString *playbackStatePaused;
@property (readonly) NSString *playbackStatePlaying;
@property (readonly) NSString *playbackStateSeekingBackward;
@property (readonly) NSString *playbackStateSeekingForward;
@property (readonly) NSString *playbackStateStopped;
@property (readonly) NSString *repeatModeAll;
@property (readonly) NSString *repeatModeDefault;
@property (readonly) NSString *repeatModeNone;
@property (readonly) NSString *repeatModeOne;
@property (readonly) NSString *shuffleModeAlbums;
@property (readonly) NSString *shuffleModeDefault;
@property (readonly) NSString *shuffleModeOff;
@property (readonly) NSString *shuffleModeSongs;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;
+ (id)scriptPlaybackStateForNativePlaybackState:(long long)a0;

- (id)_className;
- (void)pause;
- (void)endSeeking;
- (id)attributeKeys;
- (void)setQueueWithQuery:(id)a0;
- (void)skipToNextItem;
- (void)setQueueWithItemCollection:(id)a0;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)play;
- (void)dealloc;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)stop;
- (id)scriptAttributeKeys;
- (id)initWithPlayerType:(id)a0;

@end
