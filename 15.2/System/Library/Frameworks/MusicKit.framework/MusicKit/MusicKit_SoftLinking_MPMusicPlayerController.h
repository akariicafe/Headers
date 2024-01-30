@class NSString, MusicKit_SoftLinking_MPMusicPlayerItem, MPMusicPlayerController;

@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject {
    MPMusicPlayerController *_underlyingPlayerController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerController *systemMusicPlayer;
@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerController *applicationMusicPlayer;
@property (class, readonly, nonatomic) NSString *nowPlayingItemDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *playbackQueueDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *playbackStateDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *notificationUserInfoKeyContentItemIDs;

@property (readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
@property (readonly, nonatomic) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

- (void).cxx_destruct;
- (void)pause;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)setQueueWithDescriptor:(id)a0;
- (void)prependQueueDescriptor:(id)a0;
- (void)appendQueueDescriptor:(id)a0;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)a0;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)play;
- (void)dealloc;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)stop;
- (id)_initWithUnderlyingPlayerController:(id)a0;
- (void)_handleNowPlayingItemDidChangeNotification:(id)a0;
- (void)_handlePlaybackStateDidChangeNotification:(id)a0;
- (void)_handleQueueDidChangeNotification:(id)a0;
- (id)itemsForContentItemIDs:(id)a0;
- (void)setNowPlayingItemWithIdentifier:(id)a0;
- (void)performQueueTransaction:(id /* block */)a0;

@end
