@interface PUBrowsingVideoPlayerChange : PUViewModelChange

@property (nonatomic, setter=_setPlayStateDidChange:) BOOL playStateDidChange;
@property (nonatomic, setter=_setDesiredPlayStateDidChange:) BOOL desiredPlayStateDidChange;
@property (nonatomic, setter=_setPlayingAllowedDidChange:) BOOL isPlayingAllowedDidChange;
@property (nonatomic, setter=_setActivatedDidChange:) BOOL isActivatedDidChange;
@property (nonatomic, setter=_setPlayerLoadingAllowedDidChange:) BOOL isPlayerLoadingAllowedDidChange;
@property (nonatomic, setter=_setAVPlayerDidChange:) BOOL avPlayerDidChange;
@property (nonatomic, setter=_setPlayerItemDidChange:) BOOL playerItemDidChange;
@property (nonatomic, setter=_setErrorDidChange:) BOOL errorDidChange;
@property (nonatomic, setter=_setAtBeginningDidChange:) BOOL isAtBeginningDidChange;
@property (nonatomic, setter=_setAtEndDidChange:) BOOL isAtEndDidChange;
@property (nonatomic, setter=_setStalledDidChange:) BOOL isStalledDidChange;
@property (nonatomic, setter=_setPlayableDidChange:) BOOL isPlayableDidChange;
@property (nonatomic, setter=_setIsMutedDidChange:) BOOL isMutedDidChange;
@property (nonatomic, setter=_setAudioStatusDidChange:) BOOL audioStatusDidChange;
@property (nonatomic, setter=_setAudioSessionVolumeIncreaseDidOccur:) BOOL audioSessionVolumeIncreaseDidOccur;

- (BOOL)hasChanges;

@end
