@interface PUPlayPauseBarItemsControllerChange : NSObject

@property (readonly, nonatomic) BOOL hasChanges;
@property (nonatomic, setter=_setPlayPauseStateDidChange:) BOOL playPauseStateDidChange;
@property (nonatomic, setter=_setCurrentPlaybackTimeDidChange:) BOOL currentPlaybackTimeDidChange;
@property (nonatomic, setter=_setPlaybackDurationDidChange:) BOOL playbackDurationDidChange;

@end
